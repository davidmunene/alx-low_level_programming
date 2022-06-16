#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	b = 0;
	c = n - 1;

	while (b < c)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
		b++;
		c--;
	}
}
