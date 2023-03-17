#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	/* print using write */
	char *s1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t n1 = 0;

	/* while loop */
	while (s1[n1] != '\0')
	{
		num1++;
	}
	write(2, s1, n1);

	return (1);
}
