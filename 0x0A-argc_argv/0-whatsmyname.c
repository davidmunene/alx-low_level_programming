#include <stdio.h>

/**
 * main - Print Program Name
 * @argv:  argument
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
