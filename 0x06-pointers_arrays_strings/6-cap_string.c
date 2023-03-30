#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: string parameter to be capitalized
 *
 * Return: pointer to the final string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
