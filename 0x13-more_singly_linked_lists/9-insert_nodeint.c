#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at an index in a linked list.
 * @head: pointer to head of linked list.
 * @idx: index to wich node will be inserted.
 * @n: the data to be inserted into node.
 *
 * Return: pointer to new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr;
	listint_t *node;

	if (!head)
		return (NULL);

	ptr = *head;

	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	if (!ptr)
		return (NULL);


	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);


	node->n = n;
	node->next = ptr->next;
	ptr->next = node;

	return (ptr);
}
