#include "function_pointers.h"

/**
 * print_name - Function to print name
 * @name: Name to be printed
 * @f: Pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
