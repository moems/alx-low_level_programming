/**
 * is_prime - determines if n is a prime number.
 * @n: Number to be examined.
 * @i: iterator.
 *
 * Return: 1 if is prime and 0 if not prime.
 */
int is_prime(int n, int i)
{
	if (n == 2)
		return (1);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - Determines if a number is a prime number
 * @n: Number to be examined
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime(n, 2));
}
