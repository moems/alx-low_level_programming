/**
 * _atoi - convert string to integer
 * @s: String to be converted to int
 * 
 * Return: int value of converted string
 */
int _atoi(char *s)
{
	int i, n_count;
	unsigned int ans;
	char c;

	i = 0;
	n_count = 0;
	ans = 0;
	while (*(s + i) != '\0')
	{
		c = *(s + i);

		if (c == '-')
			n_count++;

		if (c >= '0' && c <= '9')
		{
			while (*(s + i) >= '0' && *(s + i) <= '9')
			{
				ans = (ans * 10) + (*(s + i) - 48);
				i++;
			}
			if (n_count % 2 != 0)
				ans = ans * -1;
			break;
		}


		i++;
	}
	return (ans);
}
