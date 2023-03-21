#include "main.h"

/**
 * pr - does the printing
 * @x: x axis of the table
 * @y: y axis of the table
 * @n: user input
 */
void pr(int x, int y, int n)
{
	int ans;

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

}


/**
 * print_times_table - Prints the 9 times table
 * @n: user input
 */
void print_times_table(int n)
{
	int x, y;

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
			pr(x, y, n);
			y++;
		}
		x++;
	}
}
