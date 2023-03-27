#include "main.h"

/**
 * print_rev - prints a string in revers order to stdout
 * @s: string to be printed to stdout
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}


	_putchar('\n');
}
