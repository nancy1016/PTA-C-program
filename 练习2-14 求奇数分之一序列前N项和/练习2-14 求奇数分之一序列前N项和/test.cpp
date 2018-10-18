#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//最普通for循环，以i的范围作为循环判断条件
	int i = 0;
	double sum = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <=2*n-1; i += 2)
	{
		sum += 1.0/i;
	}
	printf("sum = %.6f", sum);*


	//for循环，设置了计数器作为循环判断条件
	int i, n;
	int cnt = 0;//计数器
	double sum=0;
	scanf("%d", &n);
	for (i = 1; cnt < n; i += 2)
	{
		sum += 1.0 / i;
		cnt++;
	}
	printf("sum = %.6f", sum);


	//while循环，注意i的初始值这里要为1
	int i = 1;
	int n = 0;
	int cnt = 0;;
	double sum=0;
	scanf("%d", &n);
	while (cnt < n)
	{
		sum += 1.0 / i;
		cnt++;
		i += 2;
	}
	printf("sum = %.6f", sum);
	system("pause");
	return 0;
}