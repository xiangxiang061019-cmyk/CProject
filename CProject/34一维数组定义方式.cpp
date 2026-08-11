//#include <iostream>
//using namespace std;
//
//数组名的命名规范与变量规范一样，不要和变量重名
//数组中的下标从0开始
//int main()
//{
//	//数组的定义方法
//	//1.数据类型 数组名[数组长度];
//	//2.数据类型 数组名[数组长度]={值1，值2......};
//	//3.数据类型 数组名 [] ={值1，值2......};
//	int arr1[5];
//	//给数组的元素进新赋值
//	arr1[0] = 10;
//	arr1[1] = 10;
//	arr1[2] = 10;
//	arr1[3] = 10;
//	arr1[4] = 10;
//	//访问数组
//	cout << arr1[0] << endl;
//	cout << arr1[1] << endl;
//	cout << arr1[2] << endl;
//	cout << arr1[3] << endl;
//	cout << arr1[4] << endl;
//	//2.创建数组
//	int arr2[5] = {10,20,30,40,50};
//	//访问数组
//	for (int i =0 ;i<sizeof(arr2)/sizeof(int);i++)
//	{
//		cout << arr2[i] << endl;
//	}
//	//3.创建数组
//	int arr3[] = {100,200,300,400,500};
//	//3.访问数组
//	for (int i = 0;i < sizeof(arr3) / sizeof(int);i++)
//	{
//		cout << arr3[i] << endl;
//	}
//	system("pause");
//	return 0;
//}