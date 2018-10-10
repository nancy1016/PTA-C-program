#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fen5 = 1;
	int fen2 = 1;
	int fen1 = 1;
	int count = 0;
	int total = 0;
	int x = 0;
	scanf("%d", &x);
	//Ã¶¾Ù·¨
	for (fen5 = x / 5; fen5 >=1; fen5--)
	{
		for (fen2 = x / 2; fen2 >=1 ; fen2--)
		{
			for (fen1 = x; fen1 >=1 ; fen1--)
			{
				if (5 * fen5 + 2 * fen2 + fen1 == x)
				{
					total = fen5 + fen2 + fen1;
					count++;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
				}
			}
		}
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}