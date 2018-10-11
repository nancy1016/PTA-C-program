#define _CRT_SECURE_NO_WARNINGS	1
#include<stdio.h>
#include<stdlib.h>
int main()
{

	int n,Sn,S;//S保存前一天剩的桃子数
	scanf("%d", &n);
	Sn = 1;//第n天去吃时，剩下的桃子数
	while (n > 1)
	{
		S = 2 * Sn + 2;
		Sn = S;
		n--;
	}
	printf("%d\n", Sn);


	/*int N, m,X;
	double chi, sheng;
	scanf("%d", &N);
	m = X;
	for (int i = 0; i < N; i++)
	{
		chi = m*1.0 / 2 + 1;
		sheng = m - chi;
		m = sheng;
		if (sheng == 1)
		{
			break;
		}
	}
	printf("%d\n", X);*/
	system("pause");
	return 0;
}