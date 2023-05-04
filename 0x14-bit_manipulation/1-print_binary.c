#include "main.h"

/**
 * print_binary - Prints a binary representation of a decimal
 * @n: Decimal to be converted to binary and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long b = 1 << 31;
	int print = 0;

	while (b > 0)
	{
		if (n & b)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}

		b = b >> 1;
	}

	if (!print)
		_putchar('0');
}
