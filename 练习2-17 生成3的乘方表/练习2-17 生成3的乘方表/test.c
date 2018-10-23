#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, n;
	long sum = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		sum = pow(3, i);
		printf("pow(3,%d) = %ld\n", i, sum);
	}
	system("pause");
	return 0;
}