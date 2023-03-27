#include <stdio.h>

/**
 * print_array - Print n number of elements from an array
 * @a: The Array
 * @n: The Number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
