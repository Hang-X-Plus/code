#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
    int arr2[5] = { 5,4,3,2,1 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr2[i]);
	}
	return 0;
}