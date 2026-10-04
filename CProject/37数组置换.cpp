//#include <iostream>
//using namespace std;
//
//const int arr_size = 5;
//int arr[arr_size];
//int temp;
//int main()
//{
//	//输入数据
//	for (int j = 0;j < arr_size;j++)
//	{
//		cout << "请输入第" << j + 1 << "个数字" << endl;
//		cin >> arr[j];
//	}
//	//互换数据
//	for (int i =0;i<(arr_size+1)/2;i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[arr_size-1 - i];
//		arr[arr_size - 1 - i] = temp;
//	}
//	//输出打印
//	for (int k = 0;k < arr_size;k++)
//	{
//		cout << arr[k] << endl;
//	}
//	system("pause");
//	return 0;
//}