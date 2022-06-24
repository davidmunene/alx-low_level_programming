#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s:  string source
 * @accept: word search
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	int k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				return (s + j);
			}
		}
	}
	return (0);
}
