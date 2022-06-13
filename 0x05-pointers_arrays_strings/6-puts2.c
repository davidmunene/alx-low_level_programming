#include "main.h"

/**
 * puts2 - Print every other charcter of a string
 * starting with the first character
 * @str:  string
 * Return: nothing
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
