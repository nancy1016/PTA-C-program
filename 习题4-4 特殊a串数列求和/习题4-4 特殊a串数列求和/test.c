#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int the_num(int a, int n)//��ÿһ���ֵ���ӵ�һ�ʼ����һ����һλ�����ڶ�������λ�����Դ����ƣ�
//{
//	int num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		num = num * 10 + a;
//	}
//	return num;
//	
//}




//void the_num(int a, int n,int p[])
//{
//	p[0] = a;
//	for (int i = 0; i < n-1; i++)//����i�ķ�ΧҪС��n-1,����С��n����ΪС��n���������Խ�硣p[0]������ǵ�һ����
//	{
//		p[i + 1] = p[i] * 10 + a;
//	}
//}


int main()
{

	int a, n;
	int s = 0;
	int num = 0;
	scanf("%d %d", &a, &n);
	for (int i = 0; i < n; i++)
	{
		num = num * 10 + a;
		s += num;
	}
	printf("s = %d\n", s);



	//���鷽ʽ����ǰһ��ֵ
	/*int p[9] = { 0 };
	int a, n;
	int s = 0;
	scanf("%d %d", &a, &n);
	
	the_num(a, n, p);
	for (int i = 0; i < n; i++)
	{
		s = s + p[i];
	}
	printf("s = %d\n", s);*/


	
	//int a,n;
	//int s = 0;
	//scanf("%d %d", &a, &n);
	//for (int i = 1; i <= n; i++)//����i���ܴ�0��ʼ��һ��Ҫ��1��ʼ����Ϊ����ʵ��i����λ������һ����һλ����
	//{
	//	s = s + the_num(a, i);
	//}
	//printf("s = %d\n", s);
	system("pause");
	return 0;
}