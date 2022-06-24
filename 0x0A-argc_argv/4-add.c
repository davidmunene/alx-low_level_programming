#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry Point : Add Positive Numbers
 * @argc: Number of Command Line Arguments
 * @argv: Array that contains the program Command Line Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;
	int add = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
		if (!atoi(argv[j]))
		{
			printf("Error\n");
			return (1);
		}

		add += atoi(argv[j]);
	}

	printf("%d\n", add);

	return (0);
}
