#include "main.h"

/**
 * _islower - determines if the character c is lowercase or uppercase
 * @c: The character to be determined
 *
 * Return: On c being uppercase, 1.
 * On c being lowercase, 0.
 */
int _isupper(int c)
{
	if (c >= 'Z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
