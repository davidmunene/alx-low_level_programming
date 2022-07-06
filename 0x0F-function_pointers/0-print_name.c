#include "function_pointers.h"
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f:  function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
