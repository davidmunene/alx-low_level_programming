#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;
	unsigned int j;
	char *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(size * nmemb);
	if (new == NULL)
		return (NULL);
	tmp = new;

	for (j = 0; j < (size * nmemb); j++)
		tmp[j] = '\0';

	return (new);
}
