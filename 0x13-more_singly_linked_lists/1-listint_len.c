#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Print numbers of elements
 * @h: Pointer to a list
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
