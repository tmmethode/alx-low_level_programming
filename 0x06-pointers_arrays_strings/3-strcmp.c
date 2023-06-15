#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: void.
*/
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
