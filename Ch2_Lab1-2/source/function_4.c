#include <stdio.h>
#include <stdlib.h>

int Zhang_4(void)
{
	int a, b, c, d, e;

	d = 1;
	e = 8;
	printf("(4)\n");

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a > 0) && (a < 5) && (b == d))
			{
				printf("X");

			}
			else if ((a > 0) && (a < 5) && (b == e))
			{
				d++;
				printf("X");
				e--;
			}
			else if (a == 0)
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