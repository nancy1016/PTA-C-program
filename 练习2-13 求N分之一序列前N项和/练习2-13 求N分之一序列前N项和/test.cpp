#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*int n = 0;
	int i = 0;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
	}
	printf("sum = %.6f\n", sum);*/


	/*
	int n = 0;
	int i = 1;
	double sum = 0;
	scanf("%d", &n);
	while (i <= n)
	{
		sum += 1.0 / i;
		i++;
	}
	printf("sum = %.6f\n", sum);
	*/


	int n = 0;
	int i = 1;
	double sum = 0;
	scanf("%d", &n);
	do
	{
		sum += 1.0 / i;
		i++;
	} while (i <= n);
	printf("sum = %.6f\n", sum);
	system("pause");
	return 0;
}