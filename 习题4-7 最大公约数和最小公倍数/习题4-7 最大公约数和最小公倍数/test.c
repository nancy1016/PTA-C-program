#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int M, N;
	int yueshu = 1;
	int beishu = 1;
	scanf("%d %d", &M, &N);
	//���ҵ����Լ��
	for (int i = 1; i <= M&&i <= N; i++)
	{
		if (M%i == 0 && N%i == 0)
		{
			yueshu = i;
		}
	}
	//�������Լ��Ѱ����󹫱���
	//beishu = yueshu;
	for (int j = 1;; beishu= yueshu*j)
	{
		if (beishu%M == 0 && beishu%N == 0)
		{
			break;
		}
		j++;
	}
	printf("%d %d\n", yueshu, beishu);
	system("pause");
	return 0;
}