#include <stdio.h>
/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: The complete string
 * @accept: The bytes to match.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}
