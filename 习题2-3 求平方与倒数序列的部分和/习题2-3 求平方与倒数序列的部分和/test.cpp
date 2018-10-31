#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*int m, n;
	int i = 0;
	double sum = 0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		sum = sum + (i*i + 1.0 / i);
	}
	printf("sum = %.6f\n", sum);*/



	int m, n;
	double sum = 0;
	scanf("%d %d", &m, &n);
	int i = m;
	while (i <= n)
	{
		sum = sum + (i*i + 1.0 / i);
		i++;
	}
	printf("sum = %.6f\n", sum);
	system("pause");
	return 0;
}