#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	double num = 0;
	double sum = 0;
	int count = 0;//������
	double i = 1;//��ĸ
	double j = 2;//����
	num = 1.0*j / i;
	while (count < N)
	{
		double tmp;
		sum = sum + num;	
		tmp = j;//�ڸ�ֵ֮ǰһ��Ҫ�Ȱ�֮ǰ��j���ӱ���
		j = i + j;
		i = tmp;
		num = j/ i;
		count++;
	}
	printf("%.2f\n", sum);
	system("pause");
	return 0;
}