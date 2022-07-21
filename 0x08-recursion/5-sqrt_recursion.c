#include "main.h"

/**
 * find_sqrt - Function to find the root of a number
 * @num: Num to be squared
 * @root: the root of thr number
 * Return: Either the root or -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if ((root * root) <= num)
		return (find_sqrt(num, root + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Finds square root of a number
 * @n: Number who's square is to be calculated
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 1));
}
