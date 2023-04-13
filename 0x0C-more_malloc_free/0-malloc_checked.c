#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @b: Size of malloc
 *
 * Return: Pointer to malloced array upon success. Exit 98 upon failure.
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);

	if (tmp == NULL)
		exit(98);
	else
		return (tmp);
}
