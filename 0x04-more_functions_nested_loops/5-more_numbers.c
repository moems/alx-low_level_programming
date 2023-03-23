#include "main.h"

/**
 * more_numbers - Prints the decimal numbers
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar('1');
			}

			_putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
