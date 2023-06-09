/**
 * wildcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 1 if identical, 0 if not identical
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == s2[0])
	{
		if (s1[0] == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 +  1));
	}

	if (s1[0] == '*')
		return (wildcmp(s1 + 1, s2));

	if (s2[0] == '*')
		return (wildcmp(s1, s2 + 1));

	if (s1[-1] == '*' && s2[0] != '\0')
		return (wildcmp(s1, s2 + 1));

	if (s2[-1] == '*' && s1[0] != '\0')
		return (wildcmp(s1 + 1, s2));


	return (0);

}
