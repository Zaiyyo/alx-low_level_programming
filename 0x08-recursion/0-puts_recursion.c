#include "main.h"
#include <stdio_h>

/**
 * _puts_recursion - a function that prints a string
 * @s: a string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		printf("\n");
		return;
	}
	_putchar *s;
	_puts_recursion(s + 1);
}
