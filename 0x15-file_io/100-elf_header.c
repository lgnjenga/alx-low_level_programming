#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf(unsigned char *identifier);
void show_magic(unsigned char *identifier);
void display_class(unsigned char *identifier);
void display_data(unsigned char *identifier);
void display_version(unsigned char *identifier);
void show_abi(unsigned char *identifier);
void display_osabi(unsigned char *identifier);
void display_file_type(unsigned int elf_type, unsigned char *identifier);
void display_ep(unsigned long int ep, unsigned char *identifier);
void close_file(int file_desc);

/**
 * validate_elf - Verifies if the given file is an ELF file.
 * @identifier: Pointer to an array with the ELF magic numbers.
 * Exits with code 98 if the file is not an ELF file.
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
 * show_magic - Prints the ELF header's magic numbers.
 * @identifier: Pointer to an array with the ELF magic numbers.
 * Magic numbers are separated by spaces.
 */
void show_magic(unsigned char *identifier)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", identifier[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * display_class - Displays the ELF header's class.
 * @identifier: Pointer to an array with the ELF class.
 */
void display_class(unsigned char *identifier)
{
	printf(" Class: ");

	switch (identifier[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", identifier[EI_CLASS]);
	}
}

/**
 * display_data - Prints the ELF header's data.
 * @identifier: Pointer to an array with the ELF class.
 */
void display_data(unsigned char *identifier)
{
	printf(" Data: ");

	switch (identifier[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", identifier[EI_CLASS]);
	}
}

/**
 * display_version - Displays the ELF header's version.
 * @identifier: Pointer to an array with the ELF version.
 */
void display_version(unsigned char *identifier)
{
	printf(" Version: %d", identifier[EI_VERSION]);

	switch (identifier[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * display_osabi - Prints the ELF header's OS/ABI.
 * @identifier: Pointer to an array with the ELF version.
 */
void display_osabi(unsigned char *identifier)
{
	printf(" OS/ABI: ");

	switch (identifier[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", identifier[EI_OSABI]);
	}
}

/**
 * show_abi - Displays the ELF header's ABI version.
 * @identifier: Pointer to an array with the ELF ABI version.
 */
void show_abi(unsigned char *identifier)
{
	printf(" ABI Version: %d\n", identifier[EI_ABIVERSION]);
}

/**
 * display_file_type - Shows the ELF header's type.
 * @elf_type: The ELF type.
 * @identifier: Pointer to an array with the ELF class.
 */
void display_file_type(unsigned int elf_type, unsigned char *identifier)
{
	if (identifier[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type: ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * display_ep - Displays the ELF header's entry point.
 * @ep: The address of the ELF entry point.
 * @identifier: Pointer to an array with the ELF class.
 */
void display_ep(unsigned long int ep, unsigned char *identifier)
{
	printf(" Entry point address: ");

	if (identifier[EI_DATA] == ELFDATA2MSB)
	{
		ep = ((ep << 8) & 0xFF00FF00) | ((ep >> 8) & 0xFF00FF);
		ep = (ep << 16) | (ep >> 16);
	}

	if (identifier[EI_CLASS] == ELFCLASS32)
		printf("%#010x\n", (unsigned int)ep);
	else
		printf("%#018lx\n", ep);
}

/**
 * close_file - Closes the file.
 * @file_desc: The file descriptor of the file to be closed.
 * Exits with code 98 if the file can't be closed.
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
 * main - The main function of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 * Return: Always 0.
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
	display_class(elf_header->e_ident);
	display_data(elf_header->e_ident);
	display_version(elf_header->e_ident);
	display_osabi(elf_header->e_ident);
	show_abi(elf_header->e_ident);
	display_file_type(elf_header->e_type, elf_header->e_ident);
	display_ep(elf_header->e_entry, elf_header->e_ident);

	free(elf_header);
	close_file(file_desc);

	return (0);
}
