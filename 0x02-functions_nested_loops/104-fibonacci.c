#include "main.h"
/**
 * main - print the first 50 fibonaci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long double i, a, b, temp;

	i = 0;
	a = 0;
	b = 1;


	while (i < 98)
	{
		printf("%lf", a + b);
		if (i != 97)
			printf(", ");
		else
			printf("\n");

		temp = b;
		b = b + a;
		a = temp;

		i++;
	}

	return (0);
}
