#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double sub(double a, double b)//��������Ĳ�ֵ
{
	double _sub = 0;
	if (a >= b)
	{
		_sub = a - b;
	}
	else
	{
		_sub = -(a - b);
	}
	return _sub;
}

double len(double a, double b, double c, double d)//��������֮��ľ��룬Ҳ���Ǳ߳���
{
	double x = sub(a, c);//�������ֵ
	double y = sub(b, d);//�������ֵ
	double _len = sqrt(pow(x, 2) + pow(y, 2));//����֮��ľ��룺Ҳ���Ǳߵĳ���
	return _len;
}
double main()
{
	double x1, y1, x2, y2, x3, y3;
	double L = 0;
	double A = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	double len1 = len(x1, y1, x2, y2);
	double len2 = len(x3, y3, x1, y1);
	double len3 = len(x3, y3, x2, y2);
	if ((len1 + len2 > len3&&len2 + len3 > len1&&len1 + len3 > len2) && (len1 - len2 < len3&&len2 - len3 < len1&&len1 - len3 < len2))
	{
		L = len1 + len2 + len3;//�ܳ�
		A = 1.0*sqrt(L *(len1 + len2 - len3)*(len1 + len3 - len2)*(len2 + len3 - len1)) / 4;//���ú��׹�ʽ�������
		printf("L = %.2f, A = %.2f\n", L, A);
	}
	else
	{
		printf("Impossible");
	}
	system("pause");
	return 0;
}