#include "main.h"
/**
 * *_strncat - Concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int len = 0;

	for (k = 0; dest[k] != '\0'; k++)
		len++;

	for (k = 0; k < n && src[k]; k++)
		dest[len + k] = src[k];

	dest[len + k] = '\0';

	return (dest);
}
