#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int the_num(int a, int n)//求每一项的值（从第一项开始，第一项是一位数，第二项是两位数，以此类推）
{
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		num = num * 10 + a;
	}
	return num;
	
}

int main()
{
	int a,n;
	int s = 0;
	scanf("%d %d", &a, &n);
	for (int i = 1; i <= n; i++)//这里i不能从0开始，一定要从1开始，因为函数实参i代表位数（第一项是一位数）
	{
		s = s + the_num(a, i);
	}
	printf("s = %d\n", s);
	system("pause");
	return 0;
}