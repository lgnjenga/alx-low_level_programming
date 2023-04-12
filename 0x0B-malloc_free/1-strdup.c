#include "main.h"

/**
 * _strdup - duplicate string to new memory allocated space
 *
 * @str: string array to be duplicated
 *
 * Return: c pointer, NULL otherwise
 */
char *_strdup(char *str)
{
	char *c;
	int ln, i;

	if (str == NULL)
		return (NULL);
	ln = 0;
	while (str[ln] != '\0')
		ln++;
	c = malloc(sizeof(char) * (ln + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		c[i] = str[i];
	return (c);
}
