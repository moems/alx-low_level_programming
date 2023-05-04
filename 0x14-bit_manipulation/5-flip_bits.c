#include "main.h"

/**
 * flip_bits - count number of bits in n that need to be converted to get m.
 * @n: an unsigned int long integer number
 * @m: an unsigned int long integer number
 *
 * Return: The number of bits that need to be fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int result;

	result = n ^ m;

	for (i = 0; i < 64; i++)
	{
		if ((result >> i) & 1)
			count++;
	}

	return (count);
}
