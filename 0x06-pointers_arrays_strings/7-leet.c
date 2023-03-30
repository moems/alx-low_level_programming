/**
 * leet - Function that encodes a string to 1337.
 * @s: string to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i, j;

	int a[5] = {'a', 'e', 'o', 't', 'l'};
	int b[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (a[j] == s[i] || a[j] - 32 == s[i])
			{
				s[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
