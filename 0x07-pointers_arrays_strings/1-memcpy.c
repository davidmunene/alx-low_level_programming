#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest:  destination pointer
 * @src: source pointer
 * @n: bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
