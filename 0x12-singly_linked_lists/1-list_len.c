#include "lists.h"

/**
 * list_len - Prints the data from linked lists.
 * @h: list to be printed.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
