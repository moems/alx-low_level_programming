/**
 * cap_string - Capitalizes each word of a string.
 * @s: String to be capitalized.
 *
 * Return: Uppercase string.
 */
char *cap_string(char *s)
{
	int i, j, n_sp;

	int sp[13] = {32, 9, 10, 44, 59, 46, 33, 34, 63, 40, 41, 123, 125};

	n_sp = 13;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= 'a' || s[i] >= 'z')
		{
			i++;
			continue;
		}

		if (i == 0)
		{
			s[i] -= 'a' - 'A';
		}

		j = 0;
		while (j < n_sp)
		{
			if (sp[j] == s[i - 1])
			{
				s[i] -= 'a' - 'A';
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
