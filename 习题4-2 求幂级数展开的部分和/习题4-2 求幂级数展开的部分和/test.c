#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double fun(double x,double n)//������ÿһ���ֵ
{
	double ret = 0;
	double  i = 0;
	double num = 1;
	//���ĸ�����׳�
	for (i = 1; i <=n; i++)
	{
		num = num*i;
	}
	ret = pow(x, n) / num;//����ÿһ���ֵ
	//printf("ret=%.4f,", ret);
	return ret;
}
int main()
{
	double x = 0;
	double sum = 0;
	double n = 0;
	scanf("%lf", &x);
	do
	{
		sum = sum + fun(x, n);
		//printf("n=%lf,sum=%.4f\n",n, sum);//������Щ�����䶼�Ǳ��ڲ鿴����ֵ�������������
		n++;

	} while (fabs(fun(x, n)) >= 0.00001);
	sum = sum + fun(x, n);//���һ��ľ���ֵ����С��0.00001���������ѭ��sum��ֵû�а����һ�������ȥ�����Դ˴�Ҫ�����һ��
	//printf("n=%lf\n", n);
	printf("%.4f\n", sum);
	system("pause");
	return 0;
}