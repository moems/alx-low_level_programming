/**
 * _strlen - Returns the length of a string (counts the characters)
 * @s: The string whose length would be returned
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;
	while (*(s + i) != '\0')
		i++;

	return (i);
}
