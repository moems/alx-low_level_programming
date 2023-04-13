#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @src: Pointer to copied items.
 * @dest: Pointer to pasted items.
 * @n: the fist number of memory area to be copied.
 *
 * Return: pointer to the memory location.
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory block.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: NULL on failure. Painter to new memory block on success.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min;
	char *tmp;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		min = old_size;
	else
		min = new_size;

	tmp = malloc(new_size);
	if (tmp == NULL)
	{
		free(ptr);
		return (NULL);
	}

	_memcpy(tmp, ptr, min);
	free(ptr);

	return (tmp);
}
