#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed.
 * @format: the data type of the arguments passed.
 */
void print_all(const char * const format, ...)
{
	int i = 0, sep;
	char *s;
	va_list ls;

	va_start(ls, format);
	while (format[i] && format)
	{
		sep = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ls, int));
			break;
		case 'i':
			printf("%i", va_arg(ls, int));
			break;
		case 'f':
			printf("%f", va_arg(ls, double));
			break;
		case 's':
			s = va_arg(ls, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			sep = 0;
		}
		if (sep && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ls);
}
