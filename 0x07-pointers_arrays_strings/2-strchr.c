/**
 * _strchr - locates a character in a string
 * @s: String to be searched.
 * @c: Character to be found.
 *
 * Return: pointer to the first instance of the character in string.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	return (s + i);
}
