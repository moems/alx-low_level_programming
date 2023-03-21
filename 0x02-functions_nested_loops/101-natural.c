#include "main.h"
/**
 * main - prints the sum of all natural numbers 
 * that are factors of 3 and 5 below 1024 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, summ, target;

	a = 0;
	b = 0;
	target = 1024;
	summ = 0;

	while (a < target)
	{
		summ += a;
		a += 3;
	}

	while (b < target)
	{
		summ += b;
		b += 5;
	}

	printf("%i\n", summ);

	return (0);
}
