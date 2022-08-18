#include "main.h"

/**
 * binary_to_uint - Convert binary to int
 * @b: Char pointing to int
 * Return: Int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;
	unsigned int len = 0;
	unsigned int pow = 0;

	if (!b)
		return (0);

	/* Length of string */
	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	/* Reverse the string input but increment the power */
	for (i = len - 1; i >= 0; i--, pow++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/* Last el x 2 ^ pow and so on */
		n += (b[i] - '0') << pow;
	}

	return (n);
}
