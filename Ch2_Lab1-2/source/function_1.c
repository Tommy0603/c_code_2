#include <stdio.h>
#include <stdlib.h>

int Zhang_1(void)
{
	int a, b, c, d, e;

	printf("(1)\n");

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a == 0) || (a == 9) || (b == 0) || (b == 9))
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
}