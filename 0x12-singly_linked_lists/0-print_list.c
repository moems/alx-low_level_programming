#include "lists.h"

/**
 * print_list - Prints the data from linked lists.
 * @h: list to be printed.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *ptr;

	if (!h)
	{
		printf("[0] (nil)");
		return (0);
	}

	ptr = (list_t *) h;
	i = 0;
	while (ptr)
	{
		printf("[%u] %s\n", ptr->len, ptr->str);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
