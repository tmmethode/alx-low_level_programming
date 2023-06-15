#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
	i++;
	}

	j = 0;

	while (dest[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
