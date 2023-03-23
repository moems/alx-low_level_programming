#include "main.h"

/**
 * print_triangle - prints a right angle triangle
 * @size:  the number of times the character # should be printed
 */
void print_triangle(int size)
{
	int i, j, n;

	n = size;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			_putchar(' ');
			j++;
		}

		j = 0;
		while (j < i + 1)
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
