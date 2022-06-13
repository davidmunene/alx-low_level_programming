#include <stdio.h>
#include "main.h"

/**
 * print_array - Elements of an array of integers
 * @a: array
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < (n - 1))
			printf(", ");
	}
	printf("\n");
}
