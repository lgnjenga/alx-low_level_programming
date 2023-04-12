#include "main.h"

/**
 * create_array - create array of characters of c using int size
 * @size: size of array
 * @c: character string
 *
 * Return: str pointer to string or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	
	if (str == NULL || size == 0)
		return (NULL);
	
	for (a = 0; a < size; a++)
		str[a] = c;
	
	return(str);
}
