#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double sum = 0;
	int n = 0; 
	int i = 1;
	scanf("%d", &n);
	/*for (int i = 1; i <= n; i++)
	{
		sum = sum + sqrt(i);
	}*/
	
	while (i <=n)
	{
		sum = sum + sqrt(i);
		i++;
	}
	printf("sum = %.2f\n", sum);

	system("pause");
	return 0;
}