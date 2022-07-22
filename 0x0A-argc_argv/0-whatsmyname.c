#include <stdio.h>
#include "main.h"

/**
 * main - Main function with args
 * @argc: Number of args passed
 * @argv: Array containing all command lines
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
