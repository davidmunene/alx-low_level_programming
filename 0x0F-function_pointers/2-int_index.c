#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of the first element that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) != 0)
			{
				return (k);
			}
		}
	}
	return (-1);
}
