#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int a[5] = { 0 };//定义一个大小为5的数组，a[i]的值即对应等级的人数个数
	//int count = 0;//统计人数的个数
	//int score = 0;//分数
	//int n = 0;//总人数
	//int m = 0;//等级对应数组下标
	//scanf("%d", &n);
	//while (count < n)
	//{
	//	scanf("%d", &score);
	//	if (score >= 90)
	//	{
	//		m = 0;//A
	//	}
	//	else if (score >= 80)
	//	{
	//		m = 1;//B
	//	}
	//	else if (score >= 70)
	//	{
	//		m = 2;//C
	//	}
	//	else if (score>=60)
	//	{
	//		m = 3;//D
	//	}
	//	else
	//	{
	//		m = 4;//E
	//	}
	//	a[m]++;
	//	count++;
	//}

	////打印
	//int i;
	//for (i = 0; i < 4; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	//printf("%d", a[i]);




	int arr[1000];
	int n = 0;
	int a = 0;//A
	int b = 0;//B
	int c = 0;//C
	int d = 0;//D
	int e = 0;//E
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] >= 90)
		{
			a++;
		}
		else if (arr[i] >= 80)
		{
			b++;
		}
		else if (arr[i] >= 70)
		{
			c++;
		}
		else if (arr[i] >= 60)
		{
			d++;
		}
		else
		{
			e++;
		}
	}
	printf("%d %d %d %d %d", a, b, c, d, e);
	system("pause");
	return 0;
}