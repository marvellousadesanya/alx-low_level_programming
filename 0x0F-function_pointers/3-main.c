#include <stdio.h>
#include "3-calc.h"

/**
 * main - ...
 * @argc: Number of arguments
 * @argv: Array containing strings of args
 * Return: Always (0);
 */

int main(int argc, char *argv[])
{

	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]); /* the address char(operator) into func */

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
