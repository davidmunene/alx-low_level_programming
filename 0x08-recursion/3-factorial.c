#include "main.h"

/**
 * factorial - Returns a factorial of a number
 * @n:   An integer
 * Return:  factorial of n, or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
