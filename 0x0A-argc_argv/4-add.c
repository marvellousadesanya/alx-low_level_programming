#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Main function with args
 * @argc: Size argv
 * @argv: Number of command lines in array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

