#include "main.h"

/**
 * _islower - determines if the character c is lowercase or uppercase
 * @c: The character to be determined
 *
 * Return: On c being lowercase, 1.
 * On c being uppercase, 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
