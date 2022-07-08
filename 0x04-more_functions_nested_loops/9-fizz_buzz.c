#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Scanning an input of scores"
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", m);
		}

	}
	return (0);
}

