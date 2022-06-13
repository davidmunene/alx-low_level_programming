#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int a;
	int b;
	int len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;

	if (len % 2 == 0)
		b = len / 2;
	b = (len + 1) / 2;

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
