#include "main.h"

/**
 * _abs - Print the last digit of a number 
 * @n: number whose last digit will be printed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	
	_putchar('0' + (n % 10));
	return (n % 10);
}
