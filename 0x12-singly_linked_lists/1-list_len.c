#include "lists.h"

/**
 * list_len - function that finds the number of elements in list_t list
 * @h: The linked list list_t
 * @counter: a counter for size_t
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
