#include "main.h"

/**
 * print_square - prints a square
 * @n:  the number of times the character # should be printed
 */
void print_square(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
