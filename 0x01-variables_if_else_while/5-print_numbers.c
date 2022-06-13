#include <stdio.h>
/**
 * main - Entry point - print all numbers of base 10
 * starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0 ; number < 10; number++)
		printf("%d", number);
	printf("\n");

	return (0);
}
