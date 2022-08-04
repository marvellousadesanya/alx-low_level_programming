#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: The comma to space ints out
 * @n: Number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));

			if (i < (n - 1)) /* Ensures , doesn't appear at the end of displayed nos */
				printf("%c ", *separator);
		}
		putchar('\n');
		va_end(ap);
	}
}
