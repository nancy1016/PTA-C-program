#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
const int n = 4;
int main()
{
	int num, i;
	int sum = 0;//����sum���Ͳ�����int��һ��ҪΪdouble,��Ȼ��ƽ������ʱ����Ĳ���
	double average = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	average = sum / n;
	printf("Sum = %d; Average = %.1f\n", sum, average);
	system("pause");
	return 0;
}