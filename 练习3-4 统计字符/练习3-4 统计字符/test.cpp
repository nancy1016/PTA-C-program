#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[10] = { '\0' };
	int letter = 0;//Ӣ����ĸ����
	int blank = 0;//�ո��س�����
	int digit = 0;//�����ַ�����
	int other = 0;//�����ַ�����
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if ((a[i] >= 'a'&&a[i] <= 'z') || (a[i] >= 'A'&&a[i] <= 'Z'))
		{
			letter++;
		}
		if (a[i] >= '0'&&a[i] <= '9')
		{
			digit++;
		}
		if (a[i] == ' ' || a[i] == '\n')
		{
			blank++;
		}
	}
	other = 10 - letter - digit - blank;
	printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
	system("pause");
	return 0;
}