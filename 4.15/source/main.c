#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
		int money = 5000;
		float rate = 0.1;
		for (int i = 0; i < 15; i++)
		{
			money = money + (money*rate);
			rate =rate+0.05;
			printf("%d\n", money);
		}
		
		system("pause");
		return 0;
	
}