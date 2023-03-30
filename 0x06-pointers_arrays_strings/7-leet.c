#include "main.h"

/**
 * leet - encode string into 1337
 *
 * @str: string parameter to be encoded
 *
 * Return: str pointer to encoded string
 */
char *leet(char *str)
{
	int i;
	int j;
	char dec[] = "aAeEoOtTlL";
	char enc[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == dec[j])
			{
				str[i] = enc[j];
			}
		}
	}
	return (str);
}
