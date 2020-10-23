#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,d,e;

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
	printf("(2)\n");

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a < 3) || (a > 7 ) || (b < 3) || (b > 6))
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

	d = 1;
	e = 8;
	printf("(4)\n");

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a > 0) && (a<5) && (b == d))
			{
				printf("X");
				
			}
			else if ((a>0) && (a<5) && (b == e))
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
	system("pause");
	return 0;
}