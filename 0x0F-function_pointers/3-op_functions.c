#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add function
 * @a: first_number
 * @b: second_number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtruct function
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product function
 * @a: first number
 * @b: second number
 *
 * Return: product
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *  op_div - qoutient function]
 *  @a: first number
 *  @b: second number
 *
 *  Return: quotient
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: first number
 * @b: second number
 *
 * Return: modulus
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
