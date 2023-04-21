#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed.
 * @format: the data type of the arguments passed.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep;
	va_list ls;
	
	sep = "";
	va_start(ls, format);
	if (format == NULL)
		return;

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ls, int));
			break;
		case 'i':
			printf("%s%i", sep, va_arg(ls, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ls, double));
			break;
		case 's':
			s = va_arg(ls, char *);
			if (s == NULL)
			{
				printf("%s(nil)", sep);
				break;
			}
			printf("%s%s", sep, s);
			break;
		default:
			i++;
			continue;
		}
		i++;
		sep = ", ";
	}
	printf("\n");
	va_end(ls);
}
