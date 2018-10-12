#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fahr = 150;
	int celsius = 0;;
	celsius = 5 * (fahr - 32) / 9;
	printf("fahr = %d, celsius = %d", fahr, celsius);
	system("pause");
	return 0;
}