#include "lists.h"

/**
 * free_listint - frees allocated memories.
 * @head: head of a linked list.
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_listint(head->next);

	free(head);
}
