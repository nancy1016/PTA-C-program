#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//第一种方法
//double _sum(int n)
//{
//
//	int i = 0;
//	int cnt = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; cnt < n; i += 3)
//	{
//		sum = sum + flag*(1.0 / i);
//		cnt++;
//		flag = -flag;
//	}
//	return sum;
//}


//第二种方法：让分子不断翻它的正负性
double _sum(int n)
{

	int i = 0;
	int cnt = 0;
	double sign = 1.0;
	double sum = 0;
	for (i = 1; cnt < n; i += 3)
	{
		sum = sum + sign/ i;
		cnt++;
		sign = -sign;
	}
	return sum;
}
int main()
{

	/*int i = 0;
	int cnt = 0;
	int flag = 1;
	int n = 0;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; cnt < n; i += 3)
	{
		sum = sum + flag*(1.0 / i);
		cnt++;
		flag = -flag;
	}
	printf("sum = %.3f\n", sum);*/

	
	int n = 0;
	scanf("%d", &n);
	double ret = _sum(n);
	printf("sum = %.3f\n", ret);
	system("pause");
	return 0;
}