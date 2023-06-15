#include "main.h"

/**
 *_strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: iput value
 * n bytes from src
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
