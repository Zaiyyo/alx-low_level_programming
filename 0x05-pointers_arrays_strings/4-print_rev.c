#include "main.h"

/**
 * print_rev -  a function that prints a string in reverse
 * @s: the string to print
 * Return: Always 0.
 */
void print_rev(char *s);
{
	int i, z, a;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	a = i;

	for (z = a - i; z >= 0; z--)
	{
		_putchar (s[z]);
	}

		_putchar ('\n');
}
