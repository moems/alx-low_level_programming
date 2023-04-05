/**
 * _sqrt - Calculates the natural square root of a number.
 * @n: The square root of which to be determined.
 * @i: iterator
 *
 * Return: the natural square root of n.
 */
int _sqrt(int n, int i)
{
	if (i * i < n)
		return (_sqrt(n, i + 1));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The square root of which to be determined.
 *
 * Return: the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (_sqrt(n, 1));
}
