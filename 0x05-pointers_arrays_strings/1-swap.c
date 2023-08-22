#include "main.h"
#include <stdio.h>

/**
 * 1-swap -  a function that swaps the values
 * of two integers
 * @a: first var
 * @b: second var
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
