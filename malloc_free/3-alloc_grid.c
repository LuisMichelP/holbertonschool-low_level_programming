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

	if ((width <= 0) || (height <= 0))
	return(NULL);

	int **arr = malloc(sizeof(int*) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
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