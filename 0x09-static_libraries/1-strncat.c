/**
 * _strncat - concatenates two strings.
 * @dest: The string to be appended to.
 * @src: The string that will be appeneded.
 * @n: The number of bytes from src that would be appended.
 *
 * Return: The concactenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, src_len;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	src_len = i;
	i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + src_len + i) = *(src + i);
		i++;
	}

	*(dest + src_len + i) = '\0';

	return (dest);
}
