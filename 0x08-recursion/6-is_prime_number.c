#include "main.h"

/**
 * prime - Check Prime Number
 * @a: Factor Check
 * @b: Prime Number
 *
 * Return: 0 or 1
 */
int prime(int a, int b)
{
	if (b <= 1 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (prime(a + 1, b));
}

/**
 * is_prime_number - State if it's a Prime Number
 * @n: Number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime(2, n));
}
