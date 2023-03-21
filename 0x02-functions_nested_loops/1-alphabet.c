#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	c = 'a';
	while c <= 'z'
	{
		putchar(c);
	}
}
