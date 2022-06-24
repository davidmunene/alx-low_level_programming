#include "main.h"

/**
 * _strcat - function to concatenate/joins two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: Concatenated strip
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len = 0;

	for (j = 0; dest[j] != '\0'; j++)
		len++;


	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return (dest);

}
