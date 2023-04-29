#include "lists.h"

/**
 * print_listint - Print items in linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: number of items in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *tmp = h;


	while (tmp)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
