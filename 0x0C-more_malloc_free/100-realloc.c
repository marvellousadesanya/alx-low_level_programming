#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	ptr = malloc(old_size);

	if (new_size == old_size)
		return (ptr);
		
