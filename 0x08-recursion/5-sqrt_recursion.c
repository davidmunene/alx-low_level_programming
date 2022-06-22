#include "main.h"

/**
 * _sqrt - _sqrt_recursion
 * @n: integer
 * @i: integer
 * Return: square root
 */
int _sqrt(int n, int i)
{
if (n < 0)
return (-1);
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Function
 *  @n: integer
 *  Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
