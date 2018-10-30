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
			isleap = 0;//一定不能在这里初始化为0，要在上面。因为输出“None”的条件是一个闰年也没有，所以在范围内输出最后一个闰年后，isleap=1就不能再变了；如果每次判断前都要初始化为0，那么假如只有一个闰年，输出后再判断其他年份，每一次都是isleap=0，出了for循环也会输出“None”
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