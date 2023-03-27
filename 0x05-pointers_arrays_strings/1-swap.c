/**
 * swap_int - Swaps the values of two pointers
 * @a: int to be swapped with b
 * @b: int to be swapped with a
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
