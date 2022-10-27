#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, i, x;

	i = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		x = a[j];
		a[j] = a[i];
		a[i--] = x;
	}
}
