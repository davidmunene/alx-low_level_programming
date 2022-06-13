#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function name
 * Description:  This function prints numbers 0 - 9
 * Return: nothing
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar(a + 48);
	_putchar('\n');
}
