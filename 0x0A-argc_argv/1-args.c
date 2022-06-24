#include <stdio.h>

/**
 * main - Entry Point : Print Number Number is Arguments Passed
 * @argv: Arguments
 * @argc: Number of Arguments Passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
