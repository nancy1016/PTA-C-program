#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//Ľ��-������ȱ�������
int main()
{
	int n = 4;
	for (int i = n; i >=1; i--)//ѭ���к�
	{
		for (int j = 1; j <= n-i; j++)// ���ǰ׺�ո� ,ÿ�����n-i���ո�, �����0,1,2,3���ո�
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)//�����ǽ���ǰ׺�ո���� "*"�Ϳո�Ļ���� "* * * ...". ÿ��"*"�Ϳո�����.
		{
			if (k % 2 == 1) //k������ʱ, ���"*"
			{
				printf("*");
			}
			else
			{
				printf(" ");//j��ż��ʱ������ո�
			}
		}
		printf("\n");//������з���������һ��
	}


	//��һ��˼·-����ȱ�������
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


	//��ӡ������,���ձ�д��
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




	//��һ��˼·-���������
	//for (int i = 0; i<4; i++)//��������
	//{
	//	for (int k = 0; k < 4 + i; k++)//ÿ�м��ĸ��������������ƴ�ӿո�͡�*��
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