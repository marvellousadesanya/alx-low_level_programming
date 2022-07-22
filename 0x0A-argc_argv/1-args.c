#include <stdio.h>
#include "main.h"

/**
 * main - main function with args
 * @argc: Number of args passed
 * @argv: Array containing all strings passed
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i, num;

	for (i = 1; i < argc; i++)
	{
		num++;
	}
	printf("%d\n", num);
	return (0);
}
