#include "main.h"

/**
 * _puts_recursion - prints the string
 *
 * @s:input value
 * Return: Always (0).
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');

}
