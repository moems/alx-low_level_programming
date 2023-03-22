#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number whose last digit will be printed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}

	_putchar('0' + l);
	return (l);
}
