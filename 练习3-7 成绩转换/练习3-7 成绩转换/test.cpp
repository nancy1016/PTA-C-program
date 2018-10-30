#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score;
	char a;
	scanf("%d", &score);
	if (score >= 90)
	{
		a = 'A';
	}
	else if (score >= 80)
	{
		a = 'B';
	}
	else if (score >= 70)
	{
		a = 'C';
	}
	else if (score >= 60)
	{
		a = 'D';
	}
	else
	{
		a = 'E';
	}
	printf("%c\n", a);
	system("pause");
	return 0;
}