#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to allocates memory
 * using malloc
 * @b: unsigned int
 * Return: a pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *pnt = malloc(b);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}
