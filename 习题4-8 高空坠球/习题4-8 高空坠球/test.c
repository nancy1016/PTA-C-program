#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double h=0;
	double sum = 0;//�ڿ��о����ľ���
	int n = 0;
	scanf("%lf %d", &h, &n);
	sum = h;//Ĭ��n=1ʱ�����
	if (n == 0)//����0�����Ҫ�ر�����Ϊ�ڿ��о����ľ���ͷ����߶ȶ�Ϊ0
	{
		sum = 0;
		h = 0;
		
	}
	for (int i = 2; i <= n; i++)
	{
		h = h / 2;
		sum = sum + 2*h;
	}
	//ѭ����¼���ǵ�n�����ʱ�ĸ߶�h,�󷴵��߶Ȼ�Ҫ����һ��
	h = h / 2;
	printf("%.1f %.1f\n", sum, h);
	system("pause");
	return 0;
}