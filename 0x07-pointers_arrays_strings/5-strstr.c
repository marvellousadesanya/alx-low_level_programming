#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;
	int len = 0;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == 32)
		{
			haystack[i]++;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
					return (needle);
			}
		}
	}

	return (NULL);
}	
