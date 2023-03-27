#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i;
	i = 0;
	while (i < len / 2)
	{
		tmp  = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;

		i++;
	}
}
