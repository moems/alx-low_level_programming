/**
 * _strncpy - copies a string.
 * @dest: The pointer to be pasted to.
 * @src: The string that will be copied.
 * @n: The number of bytes from src that would be copied.
 *
 * Return: The pasted string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*(src + i) != '\0')
			*(dest + i) = *(src + i);
		else
			break;
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
