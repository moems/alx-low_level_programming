#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all the arguments passed.
 * @n: number of arguments passed.
 *
 * Return: Sum of numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ls;

	va_start(ls, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	return (sum);
}
