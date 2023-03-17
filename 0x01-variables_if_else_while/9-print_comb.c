#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		c++;
	}
	return (0);
}
