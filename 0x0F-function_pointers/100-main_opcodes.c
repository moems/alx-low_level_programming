#include "function_pointers.h"
/**
 * main - prints its opcodes
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int i, no_byts;
	char *arr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_byts = atoi(av[1]);
	if (no_byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	i = 0;
	while (i < no_byts)
	{
		if (i == no_byts - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		i++;
	}

	return (0);
}

