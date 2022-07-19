#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Print elements of a singly linked list
 * @h: Pointer to a list
 * Return: n of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
