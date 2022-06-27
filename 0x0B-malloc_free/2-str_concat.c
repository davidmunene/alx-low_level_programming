# include "main.h"
# include <stdlib.h>

/**
 *str_concat - Join two strings.
 *@s1: first string.
 *@s2: second string.
 *Return: pointer to string.
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;

	if (s2 == NULL)
		s2 = "";
	for (b = 0; s2[b] != '\0'; b++)
		;

	s = malloc(sizeof(char) * (a + b) + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
	{
		s[b + a] = s2[b];
	}
	s[b + a] = '\0';
	return (s);
}
