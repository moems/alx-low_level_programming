/**
 * factorial - computes the factorial of a number n.
 * @n: The number to return the factorial of.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
