#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: Character to the reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1); /**
				      * This basically points pointer
				      * to next character, however, it holds on till
				      * the last character is printed. The resulting
				      * output is the string in reverse.
				      */
	_putchar(*s); /* This prints what the character is currently pointing to */
}
