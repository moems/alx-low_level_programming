#include "main.h"

/**
 * print_sign - determines if n is positive, zero or negative and prints the sign
 * @n: number to be determined
 *
 * Return: On n being positive, 1.
 * On n being zero, 0.
 * On n being negative, -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
