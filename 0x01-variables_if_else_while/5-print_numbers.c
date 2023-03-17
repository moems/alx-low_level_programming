#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
		printf("%i", i++);

	putchar('\n');
	return (0);
}
