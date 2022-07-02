#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: 'Reversing a list'
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char al;

	al = 'z';

	while(al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');

	return (0);
}
