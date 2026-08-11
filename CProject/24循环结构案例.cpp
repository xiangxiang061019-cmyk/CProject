//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int temp;
//int number1;
//int main()
//{
//	
//	//添加种子
//	srand((unsigned int)time(NULL));
//	//系统生成随机数
//	temp = rand() % 100 + 1;
//	while (1)
//	{
//		//用户猜数字
//		cout << "请输入数字" << endl;
//		cin >> number1;
//		if (number1>= 0 && number1<= 100)
//		{
//			if (temp == number1)
//			{
//				cout << "你猜对了" << endl;
//				break;
//			}
//			else if (number1 > temp)
//			{
//				cout << "你猜打大了" << endl;
//			}
//			else if (number1<temp)
//			{
//				cout << "你猜小了" << endl;
//			}
//		}
//		else
//		{
//			cout << "你猜的数字不符合要求" << endl;
//		}
//		
//	}
//	system("pause");
//	return 0;
//}