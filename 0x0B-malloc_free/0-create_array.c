#include "main.h"
/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char
 * @size: Size of array
 * @c: the Char to initialize the array with
 *
 * Return: Null if size is 0 or pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr =  malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
