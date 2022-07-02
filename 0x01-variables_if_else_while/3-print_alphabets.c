#include <stdio.h>

int main(void)
{
	char ch;
	char up;

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
