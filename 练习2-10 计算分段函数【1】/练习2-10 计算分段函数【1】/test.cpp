#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double x, result;
	scanf("%lf",&x);//�����l��Ӣ��l
	if (x != 0)
	{
		result = 1 / x;
	}
	else
	{
		result = 0;
	}
	printf("f(%.1f) = %.1f", x, result);//�����1����������1
	system("pause");
	return 0;
}