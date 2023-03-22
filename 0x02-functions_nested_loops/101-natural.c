#include "main.h"
/**
 * main - prints the sum of all natural numbers
 * that are factors of 3 and 5 below 1024.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, summ, target;

	a = 0;
	target = 1024;
	summ = 0;

	while (a < target)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			summ += a;
		}
		a++;
	}

	printf("%i\n", summ);

	return (0);
}
