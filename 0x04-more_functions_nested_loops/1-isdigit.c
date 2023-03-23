/**
 * _isdigit - determines if the character c is a digit
 * @c: The character to be determined
 *
 * Return: On c being a digit, 1.
 * On c not being a digitr, 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
