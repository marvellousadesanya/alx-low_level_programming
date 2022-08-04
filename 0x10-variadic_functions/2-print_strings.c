#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: Separator string
 * @n: Number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *word; /* Must be pointer cos of %s in printf */
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(ap, char *);
		printf("%s", word);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);

		if (word == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
