#include "main.h"
/**
 * _isalpha - check for alphabetic character
 *
 * @c: argument
 *
 * Description: check alphabetic character
 *
 * Return: Always 0 (Success)
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
