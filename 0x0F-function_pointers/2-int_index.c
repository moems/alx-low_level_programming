#include "function_pointers.h"
/**
 * int_index - iterates through an array and performs an action.
 * @array:  an array.
 * @size:   the size of the array.
 * @cmp:    the function to be perfomed on the array.
 *
 * Return: On Success: The index of the found item in the array.
 *         On failure: (-1).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
