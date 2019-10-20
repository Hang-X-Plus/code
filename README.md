#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int input = 0;
	int j = 0;
	int tmp = 0;
	printf("请输入行数\n");
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			tmp = j*i;
			printf("%d*%d=%d ", i, j, tmp);
		}
		printf("\n");
	}
	return 0;
}

void change(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}


int main()
{
	int q = 0;
	int p = 0;
	scanf("%d %d", &q, &p);
	change(&q, &p);
	printf("%d %d", q, p);
	return 0;
}

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//}

int if_year(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
	{
		return 1;
	}
	else if (x % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()//实现一个函数判断是不是闰年
{
	int ret = 0;
	int year = 0;
	printf("请输入年份\n");
	scanf("%d", &year);
	ret = if_year(year);
	if (1 == ret)
	{
		printf("%d是闰年", year);
	}
	else
	{
		printf("%d不是闰年", year);	
	}
	return 0;
}

void empty(int arr[], int x)
{
	int i = 0;
	int tmp[] = { 0 };
	for (i = 1; i <= x; i++)
	{
		arr[i] = tmp[i];

	}
}
#include<windows.h>

int main()
{
	int arr[20] = { 0 };
	int sz = 0;
	int i = 0;
	for (i = 1; i <= 20; i++)
	{
		scanf("%d", arr);
	}
		sz = sizeof(arr) / sizeof(arr[0]);
	//init(arr);
		for (i = 1; i <= 20; i++)
		{
             printf("%d", arr[i]);
		}
		
		Sleep(1000);
	empty(arr, sz);
	//reverse(arr);
	return 0;
}
