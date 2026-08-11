//#include <iostream>
//using namespace std;
//
//
////new的基本语法
//int* func(void)
//{
//	int* p = new int(10);
//	return p;
//}
//
//void test01(void)
//{
//	int*p=func();
//	cout << *p << endl;
//	delete p;
//}
//
//void test02(void)
//{
//	//在堆内存中创建数组
//	int* arr = new int[10];
//	//进行赋值
//	for (int i =0;i<10;i++)
//	{
//		arr[i] = 100 + i;
//	}
//	//打印
//	for (int j =0;j<10;j++)
//	{
//		cout << arr[j] << endl;
//	}
//	//释放
//	delete arr;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}