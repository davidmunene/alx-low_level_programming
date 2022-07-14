#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * first - priting before the main
 * Return: void
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house uponmy back!\n");
}
