#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to an allocated space in memory
 * @str: pointer ro be allocated
 *
 * Return: arr or NULL
 */
char *_strdup(char *str)
{
	char *arr = NULL;
	int i, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		n++;
	}
	arr = (char *)malloc((n + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		arr[i] = str[i];
	}
	arr[n] = '\0';
	return (arr);
}
