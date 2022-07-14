#include "main.h"

/**
 * _putchar -writes the c to stdout
 *
 * @c: Checks for char c
 *
 * Return: On sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
