#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);

	return (sum);
}
