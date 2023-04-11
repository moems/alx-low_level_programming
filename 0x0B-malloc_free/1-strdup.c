#include "main.h"
/**
 * _strdup - Creates an array of chars and
 * @str: String to be duplicated
 *
 * Return: Null if size is 0 or pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i, size;
	char *dup;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;

	dup =  malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}
