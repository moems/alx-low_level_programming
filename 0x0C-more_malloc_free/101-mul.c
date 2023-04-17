#include "main.h"

/**
 * main - Program multiplies two positive numbers passed as arguments.
 *
 * Return: 0 on Success. 98 on Error.
 */
int main(int ac, char **av)
{
	int i, j;

	if (ac != 3)
	{
		_puts("Error");
		exit(98);
	}

	i = 1;
	while (i < 3)
	{
		for (j = 0; av[i][j] != 0; i++)
		{
			if (!_isdigit(av[i][j]))
			{
				_puts("Error");
				exit(98);
			}
		}
	}
	
}

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

/**
 * _strlen - Returns the length of a string (counts the characters)
 * @s: The string whose length would be returned
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * _memcpy - Copies a memory area
 * @src: Pointer to copied items.
 * @dest: Pointer to pasted items.
 * @n: the fist number of memory area to be copied.
 *
 * Return: pointer to the memory location.
 */
void *_memcpy(char *dest, char *src, unsigned int n)
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


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory block.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: NULL on failure. Painter to new memory block on success.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min;
	char *tmp;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		min = old_size;
	else
		min = new_size;

	tmp = malloc(new_size);
	if (tmp == NULL)
	{
		free(ptr);
		return (NULL);
	}

	_memcpy(tmp, ptr, min);
	free(ptr);

	return (tmp);
}

/**
 * _puts - prints a string to stdout
 * @str: string to be printed to stdout
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
