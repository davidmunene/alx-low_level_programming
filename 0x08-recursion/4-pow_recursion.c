#include "main.h"

/**
 * _pow_recursion - Function to returns the value of x raised to power of y
 * @x: Base Number
 * @y: Power or Exponent
 * Return:  x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
