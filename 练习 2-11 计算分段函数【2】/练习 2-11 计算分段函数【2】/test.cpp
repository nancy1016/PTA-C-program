#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double x, result;
	scanf("%lf", &x);
	if (x >= 0)
	{
		result = sqrt(x);
	}
	else
	{
		result = pow((x + 1), 2) + 2 * x + 1 / x;
	}
	printf("f(%.2f) = %.2f\n", x, result);
	system("pause");
	return 0;
}