#include "main.h"

/**
 * print_chessboard - Print chessboard
 * @a: Check for number
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /**
				 * Used 8 for the iterator because
				 * a chess board has equal sides
				 */
	{
		for (j = 0; j < 8; j++)
		{
			putchar((a[i])[j]);
		}
		putchar('\n');
	}

}
