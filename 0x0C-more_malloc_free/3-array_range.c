#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum number in the array (inclusive)
 * @max: the maximum number in the array (inclusive)
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, rng;
	int *arr;

	if (min > max)
		return (NULL);

	rng = max - min + 1;
	arr = malloc(rng * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < rng; i++)
		arr[i] = min + i;

	return (arr);
}
