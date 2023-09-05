#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of character
 * @c: a character to be initialized with
 *
 * Return: arr or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		arr = (char *)malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (n = 0; n < size; n++)
			{
				arr[n] = c;
			}
		}
	}
	return (arr);
}
