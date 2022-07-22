#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Main func with args
 * @argc: Number of args
 * @argv: Array containing args
 * Return: 1 in case of error, 0 on success
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		c = a * b;
		printf("%d\n", c);
		return (0);
	}
}
