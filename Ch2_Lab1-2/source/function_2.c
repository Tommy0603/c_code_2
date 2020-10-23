#include <stdio.h>
#include <stdlib.h>

int Zhang_2(void)
{
	int a, b, c, d, e;

	printf("(2)\n");

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a < 3) || (a > 7) || (b < 3) || (b > 6))
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