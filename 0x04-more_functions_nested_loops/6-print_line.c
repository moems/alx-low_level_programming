#include "main.h"

/**
 * print_line - Prints n number of underscores
 * @n:  the number of times the character _ should be printed
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
