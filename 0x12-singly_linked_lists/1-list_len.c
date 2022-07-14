#include <stddef.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer
 *
 * Return: n
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t elem = 0;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		elem++;
	}
	return (elem);
}
