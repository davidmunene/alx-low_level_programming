#include "main.h"
/**
 * *_strpbrk - Search for any of a set of bytes
 * @s: string
 * @accept: accept array
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0' && accept[i] != '\0'; i++)
	{
		if ((s[i] == accept[i]) || (s[i - 1] == accept[i]))
			return (s + i - 1);
	}

	return ('\0');
}
