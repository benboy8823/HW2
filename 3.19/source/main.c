#include<stdio.h>
#include<stdlib.h>

int day;
float interest;
float principal;
float rate;

int main()
{
	for (; ; )
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)
		{
			return 0;
		}
		else
		{
			printf("Enter interest rate:");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%d", &day);
			interest = principal * rate * day / 365;
			printf("The interest charge is $%2f\n", interest);
		}
	}
	system("pause");
	return 0;
}
