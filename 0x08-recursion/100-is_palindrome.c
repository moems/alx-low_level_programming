/**
 * count_str - counts string
 * @s: the string
 *
 * Return: the count of characters
 */
int count_str(char *s)
{
	if (s[0] == '\0')
		return (0);

	return (1 + count_str(s + 1));
}

/**
 * is_pal - determines if a string is a palindrome
 * @s: The string
 * @b: begining of string
 * @e: end of string
 *
 * Return: 1 if true, 0 if false
 */
int is_pal(char *s, int b, int e)
{
	if (b == e)
		return (1);

	if (s[b] != s[e])
		return (0);

	if (b < e + 1)
		return (is_pal(s, b + 1, e - 1));

	return (1);
}


/**
 * is_palindrome - determines if string is a palindrome
 * @s: The string
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int n;

	n = count_str(s);

	return (is_pal(s, 0, n - 1));
}


