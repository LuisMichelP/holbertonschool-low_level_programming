#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 *
 * Array creator
 *
 * @width: int
 * @height: int
 *
 * Return: arr
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if ((width <= 0) || (height <= 0))
	return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i-- > 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
