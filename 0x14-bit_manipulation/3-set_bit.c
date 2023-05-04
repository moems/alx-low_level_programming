#include "main.h"

/**
 * set_bit - change the bit at an index to 1.
 * @n: pointer to int to be changed.
 * @index: index of bit to be changed.
 *
 * Return: 1 on success, 0 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
