#include "main.h"

/**
 * get_endianness - determine the byte order of the machine
 *
 * Return: 0 on big endianness, 1 on small endianness.
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *test;

	test = (char *) & n;

	return (*test);
}
