#include "lists.h"

/**
 * sum_listint - Get the sum of all items in a linked list.
 * @head: the head of the linked list.
 *
 * Return: The sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (!head)
		return (sum);

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
