#include "function_pointers.h"
/**
 * print_name - function prints a name using a function passed as an argument.
 * @name: Name to print.
 * @f:    Function to be used to print name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
