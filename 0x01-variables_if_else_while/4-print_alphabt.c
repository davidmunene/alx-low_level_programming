#include <stdio.h>
/**
 * main - Entry point - print the letters of the alphabet in lowercase except
 * letter q and e
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != 'e' && a != 'q')
	putchar(a);
	}

	putchar('\n');

	return (0);
}
