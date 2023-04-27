#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list.
 * @head: head of the linked list.
 * @str: Element to add at the end of the linked list.
 *
 * Return: Address of new element or null if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int l;
	list_t *ptr;
	list_t *tail;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	l = 0;
	while (str[l])
		l++;

	ptr->str = strdup(str);
	ptr->len = l;
	ptr->next = NULL;

	if (!(*head))
	{
		*head = ptr;
		return (*head);
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;

	tail->next = ptr;

	return (ptr);
}
