#include "main.h"

/**
 * _abs - converts a number to the absolute value
 * @n: number to be converted
 *
 * Return: Absolue value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
