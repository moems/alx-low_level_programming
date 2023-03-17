#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int c1, c2;

	c1 = 48;
	while (c1 <= 56)
	{
		c2 = c1 + 1;
		while (c2 <= 57)
		{
			putchar(c1);
			putchar(c2);
			if (c1 != 56 || c2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			c2++;
		}
		c1++;
	}

	putchar('\n');
	return (0);
}
