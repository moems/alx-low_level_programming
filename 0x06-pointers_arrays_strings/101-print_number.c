#include "main.h"

/**
 * power - raise x to power of y
 * @x: the number to be raised
 * @y: the exponent
 *
 * Return: the result of x raised to the power of y
 */
int power(int x, int y)
{
	int i;

	i = 0;
	i++;
	if (y == 0)
		return (1);
	while (i < y)
	{
		x = x * 10;
		i++;
	}

	return (x);
}

/**
 * print_number - prints a number n
 * @n: Number to be printed
 */
void print_number(int n)
{
	unsigned int i, p;

	i = 0;
	i++;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n / power(10, i) != 0)
	{

		i++;
	}


	p = 1;
	while (p <= i)
	{
		_putchar('0' + n / power(10, (i - p)) % 10);
		p++;
	}
}
