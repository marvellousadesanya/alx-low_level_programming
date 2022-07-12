#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	char reversedStr;
	int j;
	int k = 0;

	while (s[i] != 0)
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		j--;
		reversedStr[k++] = s[j];
	}
	reversedStr[k] = '\0';

	_putchar(s);
	_putchar('\n');
}
	
