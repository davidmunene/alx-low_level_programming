#include "main.h"

/**
 * _strchr - Function to locates a character in a string
 * @s: string pointer
 * @c: character to be found
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; (*s) != '\0'; a++, s++)
	{
		if ((*s) == c)
			return (s);
	}

	return ('\0');
}
