#include <unistd.h>

/**
 * _putchar - writes the c to stdout
 *
 * @c: checks for char c
 *
 * Return: On success 1.
 *
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
