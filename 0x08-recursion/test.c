#include "main.h"


char str[] = "Marv";

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1); /* varM */
	_putchar(*s);
}

int print_len(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

}

char str2[] = "Itachi";

int get_len_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	return ((len + 1) + get_len_recursion(s + 1));
}


