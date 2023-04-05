#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Variable containing the list
 * Return: The number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
