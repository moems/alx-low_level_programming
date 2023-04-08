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
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}

	sum = 0;
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
