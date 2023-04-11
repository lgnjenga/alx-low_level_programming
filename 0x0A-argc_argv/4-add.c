#include "main.h"

/**
 * main - Entry point, adds 2 positive numbers from terminal arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success), 1 if failure
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int k = 0;
	char *c;

	if (argc >1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (j = 0; j < strlen(c); j++)
			{
				if (c[j] < 48 || c[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			k += atoi(c);
			c++;
		}

		printf("%d\n", k);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
