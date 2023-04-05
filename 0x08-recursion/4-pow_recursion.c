/**
 * _pow_recursion - recursiveley determine the a power term
 * @x: number to be raised
 * @y: the exponent
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
