/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory location
 * @b: Constant byte
 * @n: the fist number of memory area to be filled.
 *
 * Return: pointer to the memory location.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
