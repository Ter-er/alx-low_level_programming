#include "lists.h"

/**
 * listint_len - function that returns the elements in a linked listint_t list.
 * @h: pointer head
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	h = h->next;
	counter++;
	}
	return (count);
}
