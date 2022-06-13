#include "main.h"
/**
 *  print_sign - Prints the sign of a number
 *
 *  @n: number
 *
 *  Return: 1 and prints + if n is greater than zero
 *  OR -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
