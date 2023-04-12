#include "main.h"

/**
 * alloc_grid - make 2-dimensional array of integers
 *
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer to 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr2;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr2 = malloc(sizeof(int *) * height);

	if (arr2 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr2[i] = malloc(sizeof(int) * width);

		if (arr2[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr2[i]);

			free(arr2);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr2[i][j] = 0;
	}

	return (arr2);
}
