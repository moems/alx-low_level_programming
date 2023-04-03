#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: The 2D square array
 * @size: the size of the square array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int x, y;

	i = 0;
	j = size - 1;
	x = 0;
	y = 0;
	while (i < size * size)
	{
		x = x + *(a + i);
		y = y + *(a + j);

		i += size + 1;
		j += (size - 1);
	}
	printf("%i, %i\n", x, y);
}
