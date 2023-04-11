#include "main.h"
/**
 * str_concat - Concactinates two strings
 * @s1: String to be concactinated.
 * @s2: String to be concactinated.
 *
 * Return: Null if size is 0 or pointer to the newly fomred string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *cact;

	size1 = 0;
	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
			size1++;
	}
	size2 = 0;
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
			size2++;
	}

	cact =  malloc((size1 + size2 + 1) * sizeof(char));
	if (cact == NULL)
		return (NULL);

	i = 0;
	while (i < size1)
	{
		cact[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < size2)
	{
		cact[i] = s2[j];
		j++;
		i++;
	}

	cact[i] = '\0';
	return (cact);
}
