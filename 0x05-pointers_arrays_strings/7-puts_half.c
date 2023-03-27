#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: string to be split and printed
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (*(str + i) != '\0')
		i++;

	len = i;

	if (len % 2 == 0)
		i = (len - 1) / 2;
	else
		i = len / 2;

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
