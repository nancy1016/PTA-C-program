#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Odd(int num)
{
	int ret = 0;
	if (num % 2 != 0)//������
	{
		ret = num;
	}
	return ret;
}
int main()
{
	//whileѭ��
	int num;
	int sum = 0;
	scanf("%d", &num);
	while (num > 0 )
	{
		if (Odd(num))
		{
			sum = sum + num;
		}
		scanf("%d", &num);
	}
	printf("%d\n", sum);



	//do while ѭ��
	int num;
	int sum = 0;
	do
	{
		scanf("%d", &num);
		if (num <= 0)
		{
			break;
		}
		if (Odd(num))
		{
			sum = sum + num;
		}

	} while (num > 0);
	printf("%d\n", sum);



	//forѭ��
	int num;
	int sum = 0;
	scanf("%d", &num);
	for (sum = 0; num > 0;)
	{
		if (Odd(num))
		{
			sum = sum + num;
		}
		scanf("%d", &num);
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}