#include <stdio.h>
/**
 * main - Entry point - print the letters of the alphabet in lowercase and
 * in reverse
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
