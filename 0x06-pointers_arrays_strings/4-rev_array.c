#include <main.h>

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
