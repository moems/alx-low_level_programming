#include "variadic_functions.h"

/**
 * print_numbers - print numbers passed as arguments
 * @separator: the seperator to use while printing numbers
 * @n: number of arguments passed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ls, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
