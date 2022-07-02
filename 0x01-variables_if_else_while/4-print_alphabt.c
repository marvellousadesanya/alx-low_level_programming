#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: 'Skipping a loop'
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	return (0);
}
