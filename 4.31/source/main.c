#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int space = 4, num = 1, space1 = 1, num1 = 7;

	for (int a = 0; a < 9; a++)
	{
		if (a <= 4)
		{
			for (int i = 0; i < space; i++)
			{
				printf(" ");
			}
			space--;
			for (int j = 0; j < num; j++)
			{
				printf("*");
			}
			num += 2;
		}
		if (a > 4)
		{

			for (int d = 0; d < space1; d++)
			{
				printf(" ");
			}
			space1++;
			for (int c = 0; c < num1; c++)
			{
				printf("*");
			}
			num1 -= 2;
		}
		printf("\n");
	}


	system("pause");
	return 0;
}