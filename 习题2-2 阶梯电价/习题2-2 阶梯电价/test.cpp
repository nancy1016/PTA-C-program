#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	double price = 0;
	scanf("%d", &n);
	if (n <0)
	{
		printf("Invalid Value!");
	}
	else if (n <= 50)
	{
		price = n*0.53;
		printf("cost = %.2f\n", price);
	}
	else
	{
		price = 50 * 0.53 + (n - 50)*(0.53 + 0.05);
		printf("cost = %.2f\n", price);
	}
	system("pause");
	return 0;
}