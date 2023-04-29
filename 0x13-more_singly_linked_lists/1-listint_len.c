#include "lists.h"

/**
 * listint_len - Print items in linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: number of items in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *tmp = h;


	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}

	return (i);
}
