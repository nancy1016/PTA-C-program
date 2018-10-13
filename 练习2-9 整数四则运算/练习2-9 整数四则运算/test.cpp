#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Add(int a, int b)
{
	//return a + b;
	printf("%d + %d = %d\n", a, b, a+b);

}
void Sub(int a, int b)
{
	//return a - b;
	printf("%d - %d = %d\n", a, b, a - b);
}
void Mul(int a, int b)
{
	//return a*b;
	printf("%d * %d = %d\n", a, b, a * b);
}
void Div(int a, int b)
{
	//return a / b;
	printf("%d / %d = %d\n", a, b, a / b);
}

void cal(int a,int b,void(*pf)(int, int))
{
	(*pf)(a, b);
}
int main()
{
	int A = 0;
	int B = 0;
	scanf("%d %d", &A, &B);
	cal(A, B, Add);
	cal(A, B, Sub);
	cal(A, B, Mul);
	cal(A, B, Div);

	//方法二
	/*void(*pf[])(int, int) = { Add, Sub, Mul, Div };
	for (int i = 0; i < sizeof(pf) / sizeof(pf[0]); i++)
	{
		(*pf[i])(A, B);
	}*/

	//方一
	/*printf("%d + %d = %d\n", A, B, Add(A, B));
	printf("%d - %d = %d\n", A, B, Sub(A, B));
	printf("%d * %d = %d\n", A, B, Mul(A, B));
	printf("%d / %d = %d\n", A, B, Div(A, B));*/
	system("pause");
	return 0;
}