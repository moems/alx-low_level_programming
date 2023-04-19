#include "function_pointers.h"
/**
 * array_iterator - iterates through an array and performs an action.
 * @array:  an array.
 * @size:   the size of the array.
 * @action: the function to perfom on the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == (void *)0 || action == (void *)0)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
