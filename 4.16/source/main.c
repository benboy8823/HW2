#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int num1 = 1;
	int num2 = 10;
	int space3 = 0, num3 = 10;
	int space4 = 9, num4 = 1;

	printf("(A)\n");
	for (int a = 0; a < 10; a++)
	{
		for (int i = 0; i < num1; i++)
		{
			printf("*");
		}
		num1++;
		printf("\n");
	}



	printf("(B)\n");
	for (int a = 0; a < 10; a++)
	{
		for (int i = 0; i < num2; i++)
		{
			printf("*");
		}
		num2--;
		printf("\n");
	}


	printf("(C)\n");
	for (int a = 0; a < 10; a++)
	{
		for (int j = 0; j < space3; j++)
		{
			printf(" ");
		}
		space3++;
		for (int i = 0; i < num3; i++)
		{
			printf("*");
		}
		num3--;
		printf("\n");
	}

	printf("(D)\n");
	for (int a = 0; a < 10; a++)
	{
		for (int j = 0; j < space4; j++)
		{
			printf(" ");
		}
		space4--;
		for (int i = 0; i < num4; i++)
		{
			printf("*");
		}
		num4++;
		printf("\n");
	}


	system("pause");
	return 0;
}