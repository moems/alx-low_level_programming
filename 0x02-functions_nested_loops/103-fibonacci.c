#include "main.h"
/**
 * main - print the sum of even valued fibonacci terms under 4m
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, a, b, temp, sum;

	a = 0;
	b = 1;
	sum = 0;

	while (a + b < 4000000)
	{
		temp = b;
		b = b + a;
		a = temp;

		if (b % 2 == 0)
			sum += b;
	}

	printf("%i\n", sum);
	return (0);
}
