#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int year;
	scanf("%d", &year);
	if (year >2000 && year <= 2100)
	{
		int isleap;
		//int isleap=0;
		for (int i = 2001; i <= year; i++)
		{
			isleap = 0;//һ�������������ʼ��Ϊ0��Ҫ�����档��Ϊ�����None����������һ������Ҳû�У������ڷ�Χ��������һ�������isleap=1�Ͳ����ٱ��ˣ����ÿ���ж�ǰ��Ҫ��ʼ��Ϊ0����ô����ֻ��һ�����꣬��������ж�������ݣ�ÿһ�ζ���isleap=0������forѭ��Ҳ�������None��
			bool ret = leap_year(i);
			if (ret)
			{
				isleap = 1;
				printf("%d\n", i);
			}
		}
		if (isleap == 0)
		{
			printf("None\n");
		}
	}
	else
	{
		printf("Invalid year!\n");
	}
	system("pause");
	return 0;
}