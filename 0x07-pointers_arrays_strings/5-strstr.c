#include "main.h"

/**
 * _strstr - Function to locate a substring
 * @haystack: String
 * @needle: String substring
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j = 0, k = 0;

	while (haystack[j])
	{
		while (needle[k] && (haystack[j] == needle[0]))
		{
			if (haystack[j + k] == needle[k])
				k++;
			else
				break;
		}
		if (needle[k])
		{
			j++;
			k = 0;
		}
		else
			return (haystack + j);
	}
	return (0);
}
