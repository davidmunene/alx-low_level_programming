#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: integer used
 *
 * Description: Print characters
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
