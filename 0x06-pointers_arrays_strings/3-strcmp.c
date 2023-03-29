/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: Integer greater than, equal to, or less than 0, according as the
 * string s1 is greater than, equal to, or less than the string s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	unsigned int result;

	i = 0;
	result = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		result += *(s1 + i) - *(s2 + i);
		i++;
		if (result != 0)
			break;
	}

	return (result);
}
