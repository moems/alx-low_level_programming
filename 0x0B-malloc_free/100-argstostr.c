#include "main.h"
/**
 * argstostr - Concactinates two strings
 * @ac: Argument count.
 * @av: Argument Variable.
 *
 * Return: Null if size is 0 or pointer to the newly fomred string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, count;
	char *cact;

	if (ac == 0 || av == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}

	cact = malloc((count + 1) * sizeof(char));
	if (cact == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cact[k++] = av[i][j];
		}
		cact[k++] = '\n';
	}

	cact[k] = '\0';

	return (cact);
}
