#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int a, b, c;
int main(void)
{
	printf("please input side1:");
	scanf_s("%d", &a);
	printf("please input side2:");
	scanf_s("%d", &b);
	printf("please input hypotenuse:");
	scanf_s("%d", &c);

	if(pow(c,2)==pow(a,2)+pow(b,2)&&(a<=500) && (b <= 500) && (c <= 500))
	{
		printf("This is a right triangle.\n");
	}
	else if (pow(c, 2) != pow(a, 2) + pow(b, 2) && (a <= 500) && (b <= 500) && (c <= 500))
	{
		printf("This is a right triangle.\n");
	}
	else
	{
		printf("The hypotenuse is out of range.\n");
	}
	system("pause");
	return 0;
}
