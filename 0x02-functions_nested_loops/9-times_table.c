#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int x, y, ans;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			ans = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else if (ans <= 9)
			{
				_putchar(' ');
				_putchar('0' + ans);
			}
			else
			{
				_putchar('0' + ans / 10);
				_putchar('0' + ans % 10);
			}

			if (y != 9)
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
