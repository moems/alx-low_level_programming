#ifndef ABS_FUNC
#define ABS_FUNC

/**
 * ABS - Determines the absolute value of x.
 * @x: the number to be converted.
 *
 * Return: The absolute value of x.
 */
int ABS(int x)
{
	if (x < 0)
		return (-1 * x);
	else
		return (x);
}

#endif /* #ifndef ABS_FUNC */
