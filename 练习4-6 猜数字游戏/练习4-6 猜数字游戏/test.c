#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int key,num, N;
	int count = 0;//��¼�µĴ���
	scanf("%d %d", &key, &N);
	do
	{
		scanf("%d", &num);
		count++;
		if ((num<0 && count<N) || (num>0&&count>N&&num!=key))//�������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������
		{
			printf("Game Over\n");
			break;
		}
		else
		{
			if (num > key)
			{
				printf("Too big\n");
			}
			else if (num < key)
			{
				printf("Too small\n");
			}
			else
			{
				if (count == 1)
				{
					printf("Bingo!\n");
					break;
				}
				else if (count <= 3)
				{
					printf("Lucky You!\n");
					break;
				}
				else if (count <= N)
				{
					printf("Good Guess!\n");
					break;
				}
				else
				{
					printf("Game Over\n");
					break;
				}
			}
		}
	} while (num >= 0);





	system("pause");
	return 0;
}