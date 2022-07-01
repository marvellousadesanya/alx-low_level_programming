#include <stdio.h>

/**
 * main - Entry point
 *
 * description: 'Loops for printing out alphabet
 * in lower case'
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'a';


	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
