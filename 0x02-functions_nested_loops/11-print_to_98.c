#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function
 * Description: Prints all natural numbers form n to 98
 * @n:argument
 * Return
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
}
