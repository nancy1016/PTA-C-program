#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int count = 0;//记录输入的次数
	double price = 0;
	//scanf("%d", &n);
	//count++;

	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	while (count < 5)
	{
		/*printf("[1] apple\n");
		printf("[2] pear\n");
		printf("[3] orange\n");
		printf("[4] grape\n");
		printf("[0] exit\n");*/
		scanf("%d", &n);
		count++;
		if (n == 0)
		{
			break;
		}
		switch (n)
		{
		case 1:
			price = 3.00;
			//printf("price = 3.00\n");
			break;
		case 2:
			price = 2.50;
			//printf("price = 2.50\n");
			break;
		case 3:
			price = 4.10;
			//printf("price = 4.10\n");
			break;
		case 4:
			price = 10.20;
			//printf("price = 10.20\n");
			break;
		default:
			price = 0;
			//printf("price = 0.00\n");
			break;
		}
		printf("price = %.2f\n", price);
	}
	//printf("price = %.2f\n", price);

	system("pause");
	return 0;
}