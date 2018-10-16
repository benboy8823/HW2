#include<stdio.h>
#include<stdlib.h>

double salary;

int main()
{
	for (; ; )
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%lf", &salary);
		if (salary == -1)
		{
			return 0;
		}
		salary = (salary * 0.09) + 200;
		printf("Salary is :%lf\n", salary);
	}
	system("pause");
	return 0;
}