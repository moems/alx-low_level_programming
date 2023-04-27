#include "lists.h"

/**
 * print_list - Prints the data from linked lists.
 * @h: list to be printed.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *ptr = (list_t *) h;

	while (ptr)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);

		i++;
		ptr = ptr->next;
	}
	return (i);
}
