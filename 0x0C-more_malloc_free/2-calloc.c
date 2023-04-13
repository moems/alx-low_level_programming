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
	void *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tmp = malloc(nmemb * sizeof(size));

	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
