#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= 'f')
	{
		if (c == '9' + 1)
		{
			c = 'a';
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
