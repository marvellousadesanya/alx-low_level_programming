#include "main.h"

/**
 * _strspn - Prints length of substring
 * @s: Checks for pointer s
 * @accept: Checks for pointer accept
 * Return: Returns length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int newlen = 0; /* Always initialize your counter to 0 */

	for (i = 0; s[i] != '\0'; i++) /* Loop throug the char s first */
	{
		if (s[i] != 32) /**
				  * !IMPORTANT: This ensures the string
				  * is broken into segments
				  */
		{
			for (j = 0; accept[j] != '\0'; j++) /* Loop through char accept now */
			{
				if (s[i] == accept[j]) /* compares two string lengths */
					newlen++; /* adds 1 each time condition is true */
			}
		}
		else
			return (newlen);

	}


	return (newlen);

}
