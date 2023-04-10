/**
 * _strcpy - copies a string to a pointer
 * @dest: the pointer to the pasted string
 * @src: a pointer to the original string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
