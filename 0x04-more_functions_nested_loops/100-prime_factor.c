#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int i, n;

	i = 2;
	n = 612852475143;

	while (i * i <= n)
	{
		if (n % i != 0)
			i++;
		else
			n = (n / i);
	}
	printf("%li\n", n);


	return (0);
}
