#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//Çó½×³Ëº¯Êý
int fac(int n)
{
	int mul = 1;
	for (int i = n; i > 0; i--)
	{
		mul = mul*i;
	}
	return mul;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int i = 1;
	while (i <= n)
	{
		sum = sum + fac(i);
		i++;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}