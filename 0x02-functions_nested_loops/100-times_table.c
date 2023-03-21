#include "main.h"

/**
 * print_times_table - Prints the 9 times table
 */
void print_times_table(int n)
{
	int x, y, ans;

	if (n < 0 || n > 15)
	{
		return;
	}


	x = 0;
	while (x <= n)
	{
		y = 0;
		while (y <= n)
		{
			ans = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else if (ans <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ans);
			}
			else if (ans < 100)
			{
				_putchar(' ');
				_putchar('0' + (ans / 10));
				_putchar('0' + (ans % 10));
			}
			else
			{
				_putchar('0' + ((ans / 100)));
				_putchar('0' + ((ans / 10) % 10));
				_putchar('0' + (ans % 10));
			}

			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			y++;
		}
		x++;
	}
}
