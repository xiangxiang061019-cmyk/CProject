//#include <iostream>
//using namespace std;
//int arr[] = {25,46,49,44,748,464,16454,454468,46548,5,10,28,36};
//int len = sizeof(arr) / sizeof(arr[0]);
////冒泡排序函数
//const void bubbleSort(int *arr,int len)
//{
//	for (int i =0;i<len-1;i++)
//	{
//		for (int j =0;j<len-i-1;j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////遍历数组函数
//const void print_arr(int*arr,int len)
//{
//	for (int i =0;i<len;i++)
//	{
//		cout << "第" << i + 1 << "个元素为:" << arr[i] << endl;
//	}
//}
//int main()
//{
//	bubbleSort(arr,len);
//	print_arr(arr,len);
//	system("pause");
//	return 0;
//}