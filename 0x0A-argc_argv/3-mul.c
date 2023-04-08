#include "main.h"

/**
 * main - Entry Point. Prints the product of two arguments.
 * @argc: argucment count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int  main(int argc, char **argv)
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", prod);

	return (0);
}
