#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//思路一：（1）将数字存入数组中，先遍历数组找出最大值max；
//（2）将最大值max作为参数，在另一个函数中再遍历数组，将每一个值与max比较，找出最小下标
//int FindMaxNum(int a[], int n)
//{
//	int max = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i]>max)
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//
////找最大值的最小下标
//int FindIndex(int a[], int n, int max)
//{
//	int index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == max)
//		{
//			index = i;
//			break;
//		}
//	}
//	return index;
//}

//思路二：O(n)时间复杂度
//index保存最大值所在的最小下标，arr[index]即为最大值；
//遍历一遍数组，边遍历边比较数值大小，不断更新index，最后index就是最大值的最小下标，arr[index]为最大值
int Find_Maxnum_index(int a[], int n)
{
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i]>a[index])
		{
			index = i;
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
	
	int _index = Find_Maxnum_index(arr, n);
	printf("%d %d\n", arr[_index], _index);
	system("pause");
	return 0;
}