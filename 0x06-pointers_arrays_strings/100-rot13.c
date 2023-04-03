/**
 * rot13 - Function that encodes a string to rot13 by rotating each char by 13.
 * @s: string to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];

		if (c >= 'a' && c <= 'z')
		{
			c = ((c - 97 + 13) % 26) + 97;
		}

		if (c >= 'A' && c <= 'Z')
		{
			c = ((c - 65 + 13) % 26) + 65;
		}

		s[i] = c;
		i++;
	}
	return (s);
}
