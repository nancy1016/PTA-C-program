#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//����ͨforѭ������i�ķ�Χ��Ϊѭ���ж�����
	int i = 0;
	double sum = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <=2*n-1; i += 2)
	{
		sum += 1.0/i;
	}
	printf("sum = %.6f", sum);*


	//forѭ���������˼�������Ϊѭ���ж�����
	int i, n;
	int cnt = 0;//������
	double sum=0;
	scanf("%d", &n);
	for (i = 1; cnt < n; i += 2)
	{
		sum += 1.0 / i;
		cnt++;
	}
	printf("sum = %.6f", sum);


	//whileѭ����ע��i�ĳ�ʼֵ����ҪΪ1
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