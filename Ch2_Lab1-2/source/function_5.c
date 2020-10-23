#include <stdio.h>
#include <stdlib.h>

int Zhang_5(void)
{
	int a, b, c, d, e;

	d = 9;

	printf("(5)\n");

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b)
			{
				printf("X");
			}
			else if (b == d)
			{
				printf("X");
				d--;
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
}