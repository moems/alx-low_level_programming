#include "variadic_functions.h"

/**
 * print_strings - print strings passed as arguments
 * @separator: the seperator to use while printing strings
 * @n: number of arguments passed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;
	char *s;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ls, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
