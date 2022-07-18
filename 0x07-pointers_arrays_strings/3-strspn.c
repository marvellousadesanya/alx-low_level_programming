#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int newlen = 0; /* Always initialize your counter to 0 */

	for (i = 0; s[i] != '\0'; i++) /* Loop throug the char s first */
	{
		for (j = 0; accept[j] != '\0'; j++) /* Loop through char accept now */
		{
			if (s[i] == accept[j]) /* compares two string lengths */
				newlen++; /* adds 1 each time condition is true */
		}
		
	}


	return (newlen);

}
