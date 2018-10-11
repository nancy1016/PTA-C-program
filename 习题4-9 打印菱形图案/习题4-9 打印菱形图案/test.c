#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i, j;
	scanf("%d", &n);
	//打印上半部分（正三角）
	for (i = 0; i < (n / 2) + 1; i++)
	{
		//打印前面的连续空格
		for (j = 0; j < n / 2-i; j++)
		{
			printf("  ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	//打印下半部分（倒三角）
	for (i = 0; i < n / 2; i++)
	{
		//打印前面的连续空格
		for (j = 0; j <i+1; j++)
		{
			printf("  ");
		}
		//打印*
		for (j = 0; j <n-(2*i+2); j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}