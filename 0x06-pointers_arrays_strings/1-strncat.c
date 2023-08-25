#include "main.h"
#include <stdio.h>

/**
 * *_strncat -  a function that concatenates two strings
 * @dest: the destination string
 * @src: source string
 * @n:number of bytes to concatenate
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, r;

	i = 0;
	r = 0;

	while (dest[i] != '\0')
		i++;

	while (src[r] != '\0' && r < n)
	{
		dest[i] = src[r];
		i++;
		r++;
	}

	dest[i] = '\0';

	return (dest);
}
