#include "main.h"

/**
 * swap_int - Swap 2 integers
 *
 * @a: Checks for int a 
 *
 * @b: Checks for int b
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
