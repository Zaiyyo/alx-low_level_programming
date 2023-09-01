#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: a number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
