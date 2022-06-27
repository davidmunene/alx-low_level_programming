#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 - dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width < 1 || height < 1)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
