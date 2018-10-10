#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double h=0;
	double sum = 0;//在空中经过的距离
	int n = 0;
	scanf("%lf %d", &h, &n);
	sum = h;//默认n=1时的情况
	if (n == 0)//当第0次落地要特别处理，因为在空中经过的距离和反弹高度都为0
	{
		sum = 0;
		h = 0;
		
	}
	for (int i = 2; i <= n; i++)
	{
		h = h / 2;
		sum = sum + 2*h;
	}
	//循环记录的是第n次落地时的高度h,求反弹高度还要计算一次
	h = h / 2;
	printf("%.1f %.1f\n", sum, h);
	system("pause");
	return 0;
}