#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory location
 * @b: Constant byte
 * @n: the fist number of memory area to be filled.
 *
 * Return: pointer to the memory location.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

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

	if (nmemb == 0 || size == 0)
		return (NULL);

	tmp = malloc(nmemb * size);

	if (tmp == NULL)
		return (NULL);

	_memset(tmp, 0, nmemb * size);

	return (tmp);
}
