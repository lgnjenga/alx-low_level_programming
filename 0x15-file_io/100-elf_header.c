#include "main.h"

/**
 * validate_elf - validate elf function
 *
 * @identifier: param1
 *
 * Return: nothing, void
 */
void validate_elf(unsigned char *identifier)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (identifier[i] != 127 &&
			identifier[i] != 'E' &&
			identifier[i] != 'L' &&
			identifier[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * show_magic - show magic function
 *
 * @identifier: param1
 *
 * Return: nothing, void
 */
void show_magic(unsigned char *identifier)
{
	int i;

	printf(" Magic:");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf(" %02x", identifier[i]);
	}

	printf("\n");
}

/**
 * close_file - close file function
 *
 * @file_desc: param1
 *
 * Return: nothing, void
 */
void close_file(int file_desc)
{
	if (close(file_desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(98);
	}
}

/**
 * main - entry point
 *
 * @argc: param1
 * @argv: param2
 *
 * Return: nothing, void
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *elf_header;
	int file_desc;
	ssize_t num_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s file\n", argv[0]);
		exit(98);
	}

	file_desc = open(argv[1], O_RDONLY);
	if (file_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (!elf_header)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		close_file(file_desc);
		exit(98);
	}

	num_read = read(file_desc, elf_header, sizeof(Elf64_Ehdr));
	if (num_read != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		free(elf_header);
		close_file(file_desc);
		exit(98);
	}

	validate_elf(elf_header->e_ident);
	show_magic(elf_header->e_ident);

	free(elf_header);
	close_file(file_desc);

	return (0);
}
