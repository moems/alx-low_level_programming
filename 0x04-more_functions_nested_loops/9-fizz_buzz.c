#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0)
			printf("Fizz");

		if (i % 5 == 0)
			printf("Buzz");

		if (i % 3 != 0 && i % 5 != 0)
			printf("%i", i);

		printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
