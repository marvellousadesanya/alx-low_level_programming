#include <stdio.h>


int main(void)
{
	int n;
	int ch;

	n = 0;
	ch = 'a';

	while(n < 10) 
	{
		putchar(n + '0');
		n++;
	}
	
	while(ch <= 'f') 
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
