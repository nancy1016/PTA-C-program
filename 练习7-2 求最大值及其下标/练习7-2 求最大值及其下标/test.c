#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//˼·һ����1�������ִ��������У��ȱ��������ҳ����ֵmax��
//��2�������ֵmax��Ϊ����������һ���������ٱ������飬��ÿһ��ֵ��max�Ƚϣ��ҳ���С�±�
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
////�����ֵ����С�±�
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

//˼·����O(n)ʱ�临�Ӷ�
//index�������ֵ���ڵ���С�±꣬arr[index]��Ϊ���ֵ��
//����һ�����飬�߱����߱Ƚ���ֵ��С�����ϸ���index�����index�������ֵ����С�±꣬arr[index]Ϊ���ֵ
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