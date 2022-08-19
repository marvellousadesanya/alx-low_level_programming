#include "main.h"

/**
 * get_bit - Get index of bit
 * @n: Number
 * @index: The index
 * Return: -1 or bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit;

	for (i = 0; n > 0; i++)
	{
		bit = n % 2;
		n = n / 2;
		if (i == index)
		{
			return (bit);
		}
	}
	return (-1);
}
