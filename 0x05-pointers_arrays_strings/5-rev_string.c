#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	char tmpStr; /** Used as a backup variable to prevent 
			directly assigning variables to one another*/
	int j;

	while (s[i] != '\0')
	{
		/** returns length of string */
		i++;
	}
	for (j = 0; j < i / 2; j++) /** For swapping indexes with their opposite numbers */
	{
		tmpStr = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmpStr;
	}
	_putchar(s[j]);
}
	
