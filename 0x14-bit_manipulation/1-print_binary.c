#include "main.h"

/**
 * print_binary - Prints a binary representation of a decimal
 * @n: Decimal to be converted to binary and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int b;
	int i = 63, print = 0;


	while (i >= 0)
	{
		b = n >> i

		if (b & 1)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}

		i--;
	}

	if (!print)
		_putchar('0');
}
