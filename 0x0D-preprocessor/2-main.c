#include <stdio.h>

/**
 * main - prints the name of the file.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = __FILE__;

	printf("%s\n", s);

	return (0);
}
