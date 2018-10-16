#include<stdio.h>
#include<stdlib.h>

int hours;
float rate,salary;

int main(void)
{
	for (;;)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hours);
		if (hours != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%2f", &rate);
			if (hours < 40)
			{
				salary = hours * rate;
				printf("salary is $%2f\n", salary);
			}
			else if (hours >= 40)
			{
				salary = (hours - 40)*1.5*rate + (40 * rate);
				printf("salary is $%2f\n", salary);

			}

		
		}
		else return 0;
	}
	system("pause");
	return 0;
}