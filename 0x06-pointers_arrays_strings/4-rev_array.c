/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array.
 * @n: The number of items in the array.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}
