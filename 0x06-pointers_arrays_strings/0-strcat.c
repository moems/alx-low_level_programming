/**
 * _strcat - concatenates two strings.
 * @dest: The string to be appended to.
 * @src: The string that will be appeneded.
 *
 * Return: The concactenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i, src_len;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	src_len = i;
	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + src_len + i) = *(src + i);
		i++;
	}

	*(dest + src_len + i) = '\0';

	return (dest);
}
