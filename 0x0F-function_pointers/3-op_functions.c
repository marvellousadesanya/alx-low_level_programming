#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two ints
 * @a: First num
 * @b: Second num
 * Return: ...
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract
 * @a: ...
 * @b: ...
 * Return: ...
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply 2 ints
 * @a: ...
 * @b: ...
 * Return: ...
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: ...
 * @b: ...
 * Return: ...
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
 * op_mod - Modulus
 * @a: ...
 * @b: ...
 * Return: ...
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
