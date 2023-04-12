#include "main.h"

/**
 * str_concat - concatenate 2 strings using memory allocation
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, ln, x, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1(i) != '\0')
		i++;
	j = 0;
	while (s2(j) != '\0')
		j++;
	ln = 0;
	ln = i + j;
	str = malloc(sizeof(char) * (ln + 1));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		str[y] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return (str);
}
