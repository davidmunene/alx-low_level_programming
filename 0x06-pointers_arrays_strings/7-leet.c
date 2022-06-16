#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 *
 * Return: str
 */
char *leet(char *str)
{
	int j, k;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (j = 0; *(str + j); j++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (a[k] == *(str + j))
				*(str + j) = b[k];
		}
	}
	return (str);
}
