#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	double balance1, nbalance, charge, credit, limit;

	for (;;)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &number);
		if (number != -1)
		{
			printf("Enter beginning balance:");
			scanf_s("%lf", &balance1);
			printf("Enter total charges:");
			scanf_s("%lf", &charge);
			printf("Enter total credits:");
			scanf_s("%lf", &credit);
			printf("Enter credit limit:");
			scanf_s("%lf", &limit);
			nbalance = balance1 + charge - credit;
			printf("Account:     %d\n", number);
			printf("Credit limit:%.2lf\n", limit);
			printf("Balance:     %.2lf\n", nbalance);
		}
		else return 0;
		if (nbalance > limit)
		{
			printf("Credit Limit Exceeded.\n");
		}
		else
		{
			printf("Credit Limit not Exceeded.\n");
		}
	}
	system("pause");
	return 0;

}