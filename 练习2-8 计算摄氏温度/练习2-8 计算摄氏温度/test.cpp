#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//PTA 2-8 通过
int main()
{
	int F = 0;
	scanf("%d", &F);
	double Celsius = 0.0;
	Celsius = 5.0 * (F - 32)/9.0;
	printf("Celsius = %f\n", Celsius);
	system("pause");
	return 0;
}


//书上例题2.4输出华氏-摄氏温度转换表
//int main()
//{
	/*int fahr, lower, upper;
	double celsius;
	printf("Enter lower:");
	scanf("%d", &lower);
    printf("Enter upper:");
	scanf("%d", &upper);
	if (lower <= upper)
	{
		printf("fahr celsius\n");
		for (fahr = lower; fahr <= upper; fahr++);
		{
			celsius = (5.0 / 9.0)*(fahr - 32);
			printf("%4d%6.2f\n", fahr, celsius);
		}
	}
	else
	{
		printf("error\n");
	}*/
	

	/*int lower, upper, f;
	double c = 0.0;
	printf("enter lower:");
	scanf("%d", &lower);
	printf("enter upper:");
	scanf("%d", &upper);
	printf("fahr celsius\n");
	if (lower <= upper)
	{
		for (f = lower; f <= upper; f++)
		{
			c = 5.0*(f - 32) / 9;
			printf("%4d%6.1f\n", f,c);
		}
	}
	else
	{
		printf("error\n");
	}
	system("pause");
	return 0;*/
//}