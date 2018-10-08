#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double fun(double x,double n)//求数列每一项的值
{
	double ret = 0;
	double  i = 0;
	double num = 1;
	//求分母：即阶乘
	for (i = 1; i <=n; i++)
	{
		num = num*i;
	}
	ret = pow(x, n) / num;//数列每一项的值
	//printf("ret=%.4f,", ret);
	return ret;
}
int main()
{
	double x = 0;
	double sum = 0;
	double n = 0;
	scanf("%lf", &x);
	do
	{
		sum = sum + fun(x, n);
		//printf("n=%lf,sum=%.4f\n",n, sum);//加入这些输出语句都是便于查看各项值，方便调试所用
		n++;

	} while (fabs(fun(x, n)) >= 0.00001);
	sum = sum + fun(x, n);//最后一项的绝对值必须小于0.00001，而上面的循环sum的值没有把最后一项包含进去，所以此处要添加这一句
	//printf("n=%lf\n", n);
	printf("%.4f\n", sum);
	system("pause");
	return 0;
}