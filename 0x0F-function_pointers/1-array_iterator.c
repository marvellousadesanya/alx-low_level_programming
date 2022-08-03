#include "function_pointers.h"

/**
 * array_iterator - Execute a func given as param
 * @array: Array to execute function on
 * @size: Size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* Typedef for long unsigned int */

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}	
