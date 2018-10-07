#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//慕课-输出倒等边三角形
int main()
{
	int n = 4;
	for (int i = n; i >=1; i--)//循环行号
	{
		for (int j = 1; j <= n-i; j++)// 输出前缀空格 ,每行输出n-i个空格, 即输出0,1,2,3个空格
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)//下面是紧接前缀空格，输出 "*"和空格的混合体 "* * * ...". 每个"*"和空格相邻.
		{
			if (k % 2 == 1) //k是奇数时, 输出"*"
			{
				printf("*");
			}
			else
			{
				printf(" ");//j是偶数时，输出空格
			}
		}
		printf("\n");//输出换行符，进入下一行
	}


	//另一种思路-输出等边三角形
	/*for (int i = 0; i < 4; i++) 
	{
		int n = 1;
		for (int k = 0; k < 4 + i; k++) 
		{
			if (k < 3 - i) 
			{
				printf("  ");
			}
			else if (n % 2 == 1) 
			{
				n++;
				printf(" *  ");
			}
			else {
				n++;
			}
		}
		printf("\n");
	}*/


	//打印三角形,最普遍写法
	/*int n = 4;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <=2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/




	//另一种思路-输出三角形
	//for (int i = 0; i<4; i++)//控制行数
	//{
	//	for (int k = 0; k < 4 + i; k++)//每行检测的个数，根据情况还拼接空格和“*”
	//	{
	//		if (k < 3 - i) 
	//		{
	//			printf("  ");
	//		}
	//		else 
	//		{
	//			printf("* ");
	//		}
	//	}
	//	printf("\n");
	//}
	//
	system("pause");
	return 0;
}