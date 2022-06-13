#include <stdio.h>
#include "main.h"
/**
 *rev_string - A function that reverses a string
 *@s: value to be evaluate
 *Return: 0
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int z = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; z < ((l / 2) + 1) ; z++)
	{
		x = (l - z);
		n = s[z];
		s[z] = s[x];
		s[x] = n;
	}
}
