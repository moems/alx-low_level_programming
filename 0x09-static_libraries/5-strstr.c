#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: The string to search through
 * @needle: The substring to match.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}
