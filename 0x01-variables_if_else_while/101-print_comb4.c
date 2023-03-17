#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int c1, c2, c3;

	c1 = 48;
	while (c1 <= 55)
	{
		c2 = c1 + 1;
		while (c2 <= 56)
		{
			c3 = c2 + 1;
			while (c3 <= 57)
			{
				putchar(c1);
				putchar(c2);
				putchar(c3);

				if (c1 != 55 || c2 != 56 || c3 != 57)
				{
					putchar(',');
					putchar(' ');
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
