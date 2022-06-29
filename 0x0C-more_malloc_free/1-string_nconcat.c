#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - join two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	if (n >= l2)
		n = l2;
	new = malloc(sizeof(char) * (l1 + n) + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		new[i] = s1[i];
	for (j = 0; j < n; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';

	return (new);
}
