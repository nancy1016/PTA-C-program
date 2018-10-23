#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int sign(int num)
{
	int ret = 0;
	if (num < 0)
	{
		ret = -1;
	}
	else if (num>0)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = sign(n);
	printf("sign(%d) = %d", n, ret);
	system("pause");
	return 0;
}