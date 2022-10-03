#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	s = malloc(sizeof(char) * ac);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			s[k] = av[i][j];
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	if (s == NULL)
		return (NULL);

	return (s);
}
