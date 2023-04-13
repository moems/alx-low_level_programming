#include "main.h"

/**
 * strtow - Converts a string to an array of words
 * @str: The string
 */
char **strtow(char *str)
{
	int i, j, k, wc;
	char **words;

	if (str == NULL)
		return (NULL);

	wc = 0;
	if (str[0] != ' ')
		wc++;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			wc++;
		i++;
	}

	words = malloc((wc + 1) * sizeof(char *));

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			while (str[i + j] != ' ')
				j++;
			words[k] = malloc(++j * sizeof(char)

		}


		i++;
	}

	return (words);
}
