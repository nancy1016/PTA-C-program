#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double h=0;
	double sum = 0;
	int n = 0;
	scanf("%lf %d", &h, &n);
	sum = h;
	if (n == 0)
	{
		sum = 0;
		h = 0;
		
	}
	for (int i = 2; i <= n; i++)
	{
		h = h / 2;
		sum = sum + 2*h;
	}
	h = h / 2;
	printf("%.1f %.1f\n", sum, h);
	system("pause");
	return 0;
}