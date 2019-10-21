#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 5, 4, 3, 2, 1 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double tmp = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		tmp += 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		tmp -= 1.0 / i;
//	}
//	printf("%lf\n", tmp);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		else if (i % 10 == 9)
//		{
//			count++;
//		}
//		
//		
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int col = 0;
//	int j = 0;
//	printf("请输入行数\n");
//	scanf("%d", &col);
//	for (i = 1; i <= col; i++)
//	{
//		for (j = 1; j <= col-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= col - 1; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*col - 1 - 2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//
//
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 1;
//	int sum = 0;
//	for (i = 1; i <= 999; i++)
//	{
//		int tmp = i;
//		while (tmp/10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}	
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	int input = 0;
//	printf("请输入>\n");
//	scanf("%d", &input);		
//	tmp = input;
//	for (i = 1; i <= 5; i++)
//	{
//
//		sum += tmp;
//		tmp = tmp * 10 + tmp;		
//	}	
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	rand()
//	return 0;
//}

//int find(int x[], int y, int left, int right)
//{
//	int i = 0;
//	while (left <= right)
//	{
//		int i = (right+left) / 2;
//		if (y < x[i])
//		{
//			right = i;
//		}
//		else if (y > x[i])
//		{
//			left = i;
//		}
//		else 
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	printf("请输入要寻找的值>");
//	scanf("%d", &k);
//	ret = find(arr, k, 0, sz - 1);
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("%d", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	int arr1[20] = { 0 };
//	int i = 0;
//	int j = 0;
//	again:
//	for (i = 0; i <= 20; i++)
//	{
//		scanf("%d", arr1);
//	}
//	do 
//	{
//		for (j = 0; j < 20; j++)
//		{
//			if (arr1[j] == arr[j])
//			{
//
//			}	
//			else
//			{
//                printf("输入错误，请重新输入:\n");
//				goto again;
//			}
//		}
//		goto flag;
//		
//	} while (i > 3);
//	if (i == 3)
//	{
//		printf("三次输入错误，已退出程序。\n");
//	}
//	flag:
//	printf("登陆成功\n");
//	return 0;
//}

//int main()
//{
//	char arr[] = {0};
//	int i = 0;
//	char tmp[] = { 0 };
//	gets(arr);
//	for (i = 0; i <= 20; i++)
//	{
//		if (arr[i] <= 90 && arr[i] >= 65)
//		{
//			tmp[i] = 32 + arr[i];
//			puts(tmp);
//		}
//		else if (arr[i] <= 122 && arr[i] >= 97)
//		{
//			tmp[i] = arr [i]- 32;
//			puts(tmp);
//		}
//	}
//	return 0;
//}



