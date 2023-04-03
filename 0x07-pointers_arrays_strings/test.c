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
	for (int i = 0; haystack[i] != '\0'; i++)
	{
		for (int j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
