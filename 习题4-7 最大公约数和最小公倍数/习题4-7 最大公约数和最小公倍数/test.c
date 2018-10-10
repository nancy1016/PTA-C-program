#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int M, N,m,n;
	int t = 0;
	scanf("%d %d", &M, &N);
	//辗转相除法求最大公约数
	m = M;
	n = N;
	while (n != 0)
	{
		t = m%n;
		m = n;
		n = t;
	}
	//这时m是计算出的最大公约数；最小公倍数等于(M*N)/最大公约数m
	printf("%d %d", m, M*N / m);





	//int M, N;
	//int yueshu = 1;
	//int beishu = 1;
	//scanf("%d %d", &M, &N);
	////先找到最大公约数
	//for (int i = 1; i <= M&&i <= N; i++)
	//{
	//	if (M%i == 0 && N%i == 0)
	//	{
	//		yueshu = i;
	//	}
	//}
	////根据最大公约数寻找最大公倍数
	////beishu = yueshu;
	//for (int j = 1;; beishu= yueshu*j)
	//{
	//	if (beishu%M == 0 && beishu%N == 0)
	//	{
	//		break;
	//	}
	//	j++;
	//}
	//printf("%d %d\n", yueshu, beishu);
	system("pause");
	return 0;
}