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
	int change, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (1);
	}


	change = atoi(argv[1]);

	coins = 0;

	coins += change / 25;
	change = change % 25;

	coins += change / 10;
	change = change % 10;

	coins += change / 5;
	change = change % 5;

	coins += change / 2;
	change = change % 2;

	coins += change;

	printf("%i\n", coins);




	return (0);
}
