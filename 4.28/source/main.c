#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double wsalary;
	double hwage, hours,salary0,salary1;
	double sales,salary2;
	double money,items,salary3;
	int code;

	printf("Enter your paycode:");
	scanf_s("%d",&code);
	
	switch (code)
	{
	case 1:
		printf("Enter your weekly salary:");
		scanf_s("%lf", &wsalary);
		printf("Your salary is:%lf\n", wsalary);
		break;

	case 2:
		printf("Enter your hourly wage:");
		scanf_s("%lf", &hwage);
		printf("Enter your working hours:");
		scanf_s("%lf", &hours);
		if (hours <= 40)
		{
			salary0 = hwage * hours;
			printf("Your salary is:%lf\n", salary0);
		}
		if (hours > 40)
		{
			salary1 = (hours - 40)*1.5*hwage + (hwage*40);
			printf("Your salary is:%lf\n", salary1);
		}
		break;
	case 3:
		printf("Enter your gross weekly sales:");
		scanf_s("%lf", &sales);
		salary2 = 250 + (sales*0.057);
		printf("Your salary is:%lf\n", salary2);
		break;
	case 4:
		printf("Enter your money for one item:");
		scanf_s("%lf", &money);
		printf("Enter how many items you did:");
		scanf_s("%lf", &items);
		salary3 = money * items;
		printf("Your salary is:%lf\n", salary3);
		break;

	}
	system("pause");
	return 0;
}