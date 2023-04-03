#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: The complete string
 * @accept: The bytes to search for.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}

		if (s[i] == accept[j])
		{
			n++;
		}
		else if (n > 0)
		{
			return (n);
		}

		i++;
	}
	return (n);
}
