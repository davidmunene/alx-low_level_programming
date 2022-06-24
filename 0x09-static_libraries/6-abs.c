#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 *
 * @i: The integer to be computed
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	i = i * -1;
	return (i);
}
