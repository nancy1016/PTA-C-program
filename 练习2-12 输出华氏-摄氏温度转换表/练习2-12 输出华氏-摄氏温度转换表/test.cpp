#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int fahr,lower, upper; 
	double celsius;
	scanf("%d %d", &lower, &upper);
	if ((lower <= upper) && lower <= 1000 && upper <= 1000)
	{
		printf("fahr celsius\n");
		for (fahr = lower; fahr <= upper; fahr += 2)
		{
			celsius = 5 * (fahr - 32) / 9.0;
			printf("%d%6.1f\n", fahr, celsius);
		}
	}
	else
	{
		printf("Invalid.\n");
	}
*/


	int lower, upper,fahr;
	double celsius;
	scanf("%d %d", &lower, &upper);
	if (lower <= upper)
	{
		printf("fahr celsius\n");
		for (fahr = lower; fahr <= upper; fahr += 1);
		{
			celsius = 5.0*(fahr - 32) / 9;
			printf("%d%6.1f\n", fahr, celsius);
		}
	}
	else
	{
		printf("Invalid.\n");
	}


	system("pause");
	return 0;
}