#include "main.h"
/**
 * set_string - Set the value of a pointer to a char
 * @s: The destination string
 * @to: The string to be copied.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
