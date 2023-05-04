#include "main.h"

/**
 * get_bit - Gets the bit at a certain index.
 * @n: Decimal to be converted to binary and printed.
 * @index: The index.
 *
 * Return: The bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b, checker;

	checker = (1 << index);

	if (n < checker)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
