#include "main.h"

/**
 * main - Entry Point.
 * program prints the number of arguments passed
 * @argc: argucment count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int  main(int argc, char **argv)
{
	(void)argv[0];
	printf("%i\n", argc - 1);

	return (0);
}
