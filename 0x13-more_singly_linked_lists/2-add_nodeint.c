#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list_t list
 * @head: a double pointer to thr address of the head
 * @n: an integer that adds to the list
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head - new;

	else
	{
		end = *head;
		while (temp->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head)
}
