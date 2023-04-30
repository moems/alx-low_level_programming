#include "lists.h"

/**
 * free_listint2 - frees allocated memories.
 * @head: head of a linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
