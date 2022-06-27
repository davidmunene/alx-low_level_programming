#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string as parameter
 * Return: pointer to new allocated memory
 */
char *_strdup(char *str)
{
	int a;
	char *str1;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	a++;
	str1 = malloc(sizeof(char) * a);

	if (str1 == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		str1[a] = str[a];
	str1[a] = '\0';
	return (str1);
}
