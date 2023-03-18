#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int c1, c2, c3, c4;

	c1 = 48;
	while (c1 <= 57)
	{
		c2 = 48;
		while (c2 <= 57)
		{
			c3 = c1;
			while (c3 <= 57)
			{
				c4 = c2 + 1;
				while (c4 <= 57)
				{
					putchar(c1);
					putchar(c2);
					putchar(' ');
					putchar(c3);
					putchar(c4);

					if (c1 != 57 || c2 != 56 || c3 != 57 || c4 != 57)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						c2 = 59;
					}
					c4++;
				}
				c3++;
			}
			c2++;
		}
		c1++;
	}

	putchar('\n');
	return (0);
}
