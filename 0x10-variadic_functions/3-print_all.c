#include "variadic_functions.h"

/**
 * count_format - counts format characters in string
 * @s: the string.
 *
 * Return: count of format chars.
 */
int count_format(const char * const s)
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				count++;
				break;
		}
		i++;
	}
	return (count);
}

/**
 * print_all - prints all arguments passed.
 * @format: the data type of the arguments passed.
 */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0, n;
	char *s;
	va_list ls;

	va_start(ls, format);
	n = count_format(format);
	while (format[i] != '\0')
	{
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
			i++;
			continue;
		}
		count++;
		if (count < n)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ls);
}
