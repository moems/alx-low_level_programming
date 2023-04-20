#include "3-calc.h"

/**
 * main - Entry point into the calculator program
 * @ac: argument count.
 * @av: pointer to argument list.
 *
 * Return: 0 On success.
 */
int main(int ac, char **av)
{
	int a, b;
	char *op;
	int (*calc)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	op = av[2];
	b = atoi(av[3]);

	calc = get_op_func(op);

	if (calc == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", calc(a, b));

	return (0);
}
