#include "lists.h"

/**
 * add_node - adds a node to a linked list.
 * @head: head of the linked list.
 * @str: Element to add at the head of the linked list.
 *
 * Return: Address of new element or null if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l;
	list_t *ptr;

	if (!head)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	l = 0;
	while (str[l])
		l++;

	ptr->str = strdup(str);
	ptr->len = l;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
