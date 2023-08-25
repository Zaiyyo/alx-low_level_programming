#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the result
 */
char *rot13(char *s)
{
	int i, r;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; a[r] != '\0'; r++)
		{
			if (s[i] == a[r])
			{
				s[i] = b[r];
				break;
			}
		}
	}

	return (s);
}
