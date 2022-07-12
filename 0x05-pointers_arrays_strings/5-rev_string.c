#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	char reversedStr;

	while (s[i] != 0)
	{
		i++;
	}
	int j = i - 1;
	while (i >= 0)
	{
		i--;
		reversedStr[j++] = s;
	}
	_putchar(s);
	_putchar('\n');
}
	
