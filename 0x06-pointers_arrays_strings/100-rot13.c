#include "main.h"

/**
 * rot13 - encode string using rot13 cipher
 *
 * @str: string parameter to be encoded
 *
 * Return: str pointer to encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char dec[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == dec[j])
			{
				str[i] = enc[j];
				break;
			}
		}
	}
	return (str);
}
