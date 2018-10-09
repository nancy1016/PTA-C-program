#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	double num = 0;
	double sum = 0;
	int count = 0;//计数器
	double i = 1;//分母
	double j = 2;//分子
	num = 1.0*j / i;
	while (count < N)
	{
		double tmp;
		sum = sum + num;	
		tmp = j;//在赋值之前一定要先把之前的j分子保存
		j = i + j;
		i = tmp;
		num = j/ i;
		count++;
	}
	printf("%.2f\n", sum);
	system("pause");
	return 0;
}