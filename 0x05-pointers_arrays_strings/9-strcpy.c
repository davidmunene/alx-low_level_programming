#include "main.h"

/**
 * *_strcpy - Copies a string pointed to by src
 * @dest: destionation pointer
 * @src: source pointer
 * Return: pointer to the string
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
