#include "lists.h"

/**
 * pop_listint - frees allocated memories.
 * @head: head of a linked list.
 *
 * Return: Head nodes data.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (!head)
		return (n);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;

	free(tmp);

	return (n);
}
