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
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
			{
				return (j);
			}
		}
	}
	return (-1);
}
