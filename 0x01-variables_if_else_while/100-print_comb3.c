#include <stdio.h>
/**
 * main - Entry point - print combinations of two
 * digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
