#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//˼·һ����1�������ִ��������У��ȱ��������ҳ����ֵmax��
//��2�������ֵmax��Ϊ����������һ���������ٱ������飬��ÿһ��ֵ��max�Ƚϣ��ҳ���С�±�
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

//�����ֵ����С�±�
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