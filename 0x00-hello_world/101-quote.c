#include <unistd.h>

/**
 * main - Entry point
 *
 * Return 1 (Success)
 */
int main(void)
{
	/* print using write */
	char *string1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t num1 = 0;

	/* while loop */
	while (string1[num1] != '\0')
	{
		num1++;
	}
	write(2, string1, num1);

	return (1);
}
