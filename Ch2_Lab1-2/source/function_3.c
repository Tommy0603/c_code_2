#include <stdio.h>
#include <stdlib.h>

int Zhang_3(void)
{
	int a, b, c, d, e;

	d = 5;
	e = 4;
	printf("(3)\n");

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a < 5) && (b == e))
			{
				printf("X");
				e--;
			}
			else if ((a < 5) && (b == d))
			{
				printf("X");
			}
			else if (a == 4)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		d++;
		printf("\n");
	}
}