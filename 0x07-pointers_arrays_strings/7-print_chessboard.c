#include "main.h"
/**
 * print_chessboard - Print the chessboard
 * @a: char
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(*(*(j + a) + k));
		}
	_putchar('\n');
	}
}
