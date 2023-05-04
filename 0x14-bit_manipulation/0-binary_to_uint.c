#include "main.h"

/**
 * binary_to_uint - Converts a binary number to decimal
 * @b: String of binary digits.
 *
 * Return: Decimal equivalent of binary digit 'b' on Success
 *	    0 on Failure.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decimal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal = decimal * 2 + (b[i] - '0');
	}

	return (decimal);
}
