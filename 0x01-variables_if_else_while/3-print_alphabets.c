#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Loops for the alphabet statement'
 *
 * Return: Always (0) SUCCESS
 */

int main(void)
{
	int ch;
	int up;

	ch = 'a';
	up = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');

	return (0);
}
