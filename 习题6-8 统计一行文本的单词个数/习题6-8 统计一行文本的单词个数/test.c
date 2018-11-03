#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int WordsCount(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		do
//		{
//			str++;
//		} while (*str != ' '&&*str != '\0');
//		count++;
//		if (*str != '\0')
//		{
//			str++;
//		}
//		
//
//	}
//	return count;
//
//}

int main()
{
	//字符数组中输入
	//char p[100];
	//scanf("%s",p);
	////char p[] = "hello  i am";
	//int ret = WordsCount(p);
	//printf("%d", ret);


	char ch=0;
	int flag = 0;
	int count = 0;
	do
	{
		//scanf("%c",&ch);
		ch=getchar();
		if (ch != ' '&&ch != '\n'&&flag == 0)
		{
			flag = 1;
			count++;
			//flag = 0;
		}
		else if (ch == ' ')
		{
			flag = 0;
		}

	} while (ch != '\n');
	printf("%d", count);

	/*char str[20] = { 0 };
	char ch=0;
	for (int i = 0; i < 20; i++)
	{
		scanf("%c", &ch);
	}
	*/
	system("pause");
	return 0;
}