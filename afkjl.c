#include<stdio.h>
//将数组A中的内容和数组B中的内容进行交换
//#define n 10
//int main()
//{
//	int arr1[n] = { 0 };
//	int arr2[n] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
void init(int* arr)
{
	for (int a = 0; a < 10; a++)
	{
		arr[a] = 0;
	}
}
void print(int* arr)
{
	for (int b = 0; b < 10; b++)
	{
		printf("%d", arr[b]);
	}
}
void reverse(int* arr, int sz)
{
	int left;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr);
	print(arr);
	reverse(arr, sz);
	return 0;
}