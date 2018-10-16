#include<stdio.h>
#include<stdlib.h>

int length, breath;

int main()
{
	printf("Enter length:");
	scanf_s("%d", &length);
	printf("Enter breath:");
	scanf_s("%d", &breath);

	int i, j;
	for (i = 1; i <= breath; ++i)
	{
		printf("+");
	}
	printf("\n");
	for (i = 1; i <= length-2 ; i++)
	{

		printf("+");
		for (j = 1; j <= breath-2 ; ++j)
		{
			printf(" ");
		}
		printf("+");
		printf("\n");
	}
		for (i = 1; i <= breath; ++i)
		{
			printf("+");
		}
		printf("\n");
	
	system("pause");
	return 0;


}