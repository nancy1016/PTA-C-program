#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//思路一：（1）将数字存入数组中，先遍历数组找出最大值max；
//（2）将最大值max作为参数，在另一个函数中再遍历数组，将每一个值与max比较，找出最小下标
int FindMaxNum(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}

//找最大值的最小下标
int FindIndex(int a[], int n, int max)
{
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			index = i;
			break;
		}
	}
	return index;
}
int main()
{
	int arr[10] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int _max = FindMaxNum(arr, n);
	int _index = FindIndex(arr, n, _max);
	printf("%d %d\n", _max, _index);
	system("pause");
	return 0;
}