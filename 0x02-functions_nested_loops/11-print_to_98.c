#include "main.h"

/**
 * print_to_98 - Prints numbers up to 98
 * @n: Starting number
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n++);
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n--);
		}
	}

	printf("%i\n", n);
}
