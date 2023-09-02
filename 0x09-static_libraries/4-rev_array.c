#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, r, tmp;

	r = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[r];
		a[r--] = tmp;
	}
}
