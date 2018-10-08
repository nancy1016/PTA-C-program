#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.00001
int main()
{
	double x = 0;
	double sum = 1;
	double result = 1;
	scanf("%lf", &x);
	for (int i = 1;; i++)
	{
		result = result*(x / i);
		sum += result;
		if (result < eps)
		{
			break;
		}
	}
	printf("%.4f\n", sum);
	system("pause");
	return 0;
}