#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 * Return : void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
