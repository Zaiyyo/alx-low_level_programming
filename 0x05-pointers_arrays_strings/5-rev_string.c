#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, len, leni;
	char tmp;

	len = 0;
	leni = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[leni];
		s[leni--] = tmp;
	}
}
