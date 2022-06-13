#include "main.h"
/**
 * print_alphabet_x10 - Printing the alphabet 10 times
 *
 * Description: Print Alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count += 1;
	}
}
