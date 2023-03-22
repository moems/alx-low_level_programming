#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			if (h > 9)
			{
				_putchar('0' + h / 10);
				_putchar('0' + h % 10);
			}
			else
			{
				_putchar('0');
				_putchar('0' + h);
			}

			_putchar(':');

			if (m > 9)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
			{
				_putchar('0');
				_putchar('0' + m);
			}
			_putchar('\n');
			m++;
		}
		h++;
	}
}
