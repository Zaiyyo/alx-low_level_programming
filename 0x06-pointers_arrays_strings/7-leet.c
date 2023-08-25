#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string in 1337
 * @s: string to encode
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, r;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; r < 10; r++)
		{
			if (s[i] == [r])
			{
				s[i] = b[r];
			}
		}
	}

	return (s);
}
