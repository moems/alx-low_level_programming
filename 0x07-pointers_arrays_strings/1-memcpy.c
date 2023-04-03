/**
 * _memcpy - Copies a memory area
 * @src: Pointer to copied items.
 * @dest: Pointer to pasted items.
 * @n: the fist number of memory area to be copied.
 *
 * Return: pointer to the memory location.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
