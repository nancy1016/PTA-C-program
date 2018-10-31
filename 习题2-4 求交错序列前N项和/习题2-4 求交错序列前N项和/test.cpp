#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int n = 0; 
	int i = 0;
	double sum = 0;
	int flag = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1.0*flag*i / (2 * i - 1);
		flag = -flag;
	}
	printf("%.3f\n", sum);*/


	int n = 0;
	int i = 0;
	double sign = 1.0;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + sign*i / (2 * i - 1);
		sign = -sign;
	}
	printf("%.3f\n", sum);
	system("pause");
	return 0;
}