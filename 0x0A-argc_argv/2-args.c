#include <stdio.h>
#include "main.h"

/**
 * main - Main function wit args
 * @argc: Number of commands passed
 * @argv: Array containing all command lines
 * Return: Always 0
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
