#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Ribbit_num(int N)
{
	int num1 = 1;
	int num2 = 1;
	int num = 0;
	int month = 0;
	if (N == 1)
	{
		month = 1;
	}
	else
	{
		month += 1;
		while (num <= N)
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
			month++;
		}
		if (N > num1&&N < num)
		{
			month++;
		}
	}
	return month;
}

int main()
{
	int N = 0;
	scanf("%d",&N);
	int ret = Ribbit_num(N);
	printf("%d", ret);
	system("pause");
	return 0;
}