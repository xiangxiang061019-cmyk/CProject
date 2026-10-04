//#include <iostream>
//
//class Base
//{
//public:
//	Base()
//	{
//		std::cout << "Base构造函数" << std::endl;
//	}
//	~Base()
//	{
//		std::cout << "Base析构函数" << std::endl;
//	}
//};
//class son:public Base
//{
//public:
//	son()
//	{
//		std::cout << "Son构造函数" << std::endl;
//	}
//	~son()
//	{
//		std::cout << "son析构函数" << std::endl;
//	}
//};
//
//void test01()
//{
//	//继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//	son s;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
