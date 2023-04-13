#include "main.h"
/**
 * _calloc -  allocates memory using malloc
 * @nmemb: Number of elements
 * @size:  Size of elements
 *
 * Return: Pointer to malloced array on success. Null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tmp = malloc(nmemb * size);

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tmp[i] = 0;

	return (tmp);
}
