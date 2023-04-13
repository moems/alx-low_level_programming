#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The string
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - Concactinates two strings
 * @s1: String to be concactinated
 * @s2: String to be concactinated
 * @n:  The number of bytes from s2 to be concactinated
 *
 * Return: Pointer to the concactinated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *tmp;

	len1 = 0;
	if (s1 != NULL)
		len1 = _strlen(s1);

	len2 = 0;
	if (s2 != NULL)
		len2 = _strlen(s2);

	if (len2 > n)
		len2 = n;

	tmp = malloc((len1 + len2 + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < len1)
	{
		tmp[j] = s1[i];
		i++;
		j++;
	}

	i = 0;
	while (i < len2)
	{
		tmp[j] = s2[i];
		i++;
		j++;
	}

	tmp[j] = '\0';
	return (tmp);
}
