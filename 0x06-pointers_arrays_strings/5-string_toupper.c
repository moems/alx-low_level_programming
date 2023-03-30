/**
 * string_toupper - Changes a string to uppercase
 * @s: String to be changed to uppercase.
 *
 * Return: Uppercase string.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
