/**
 * rot13 - Function that encodes a string to rot13 by rotating each char by 13.
 * @s: string to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z'))
		{
			i++;
			continue;
		}

		

		j = 0;
		while (j < 5)
		{
			
			j++;
		}
		i++;
	}
	return (s);
}
