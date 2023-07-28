#include "function_pointers.h"
/**
 * print_name - function with two arguments
 * @name: char type pointer to string
 * @f: pointer to a function
 *
 * Description: prints a name using function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
