//#include <iostream>
//
//class Base
//{
//public:
//	Base()
//	{
//
//	}
//	static void func()
//	{
//		std::cout << "Base - static void func()" << std::endl;
//	}
//	static void func(int a)
//	{
//		std::cout << "Base - static void func(int a)" << std::endl;
//	}
//public:
//	static int m_a;
//};
//int Base::m_a = 100;
//
//class Son : public Base
//{
//public:
//	static void func()
//	{
//		std::cout << "Son - static void func"<<std::endl;
//	}
//public:
//	static int m_a;
//};
//
//int Son::m_a = 200;
//
//void test01()
//{
//	//通过对象访问
//	std::cout << "通过对象访问:" << std::endl;
//	Son s1;
//	std::cout << "Son下的m_a = " << s1.m_a << std::endl;
//	std::cout << "Base下的m_a = " << s1.Base::m_a << std::endl;
//	std::cout << "----------------------------------------------------" << std::endl;
//	//通过类名访问
//	std::cout << "通过类名访问:" << std::endl;
//	std::cout << "Son下的m_a = " << Son::m_a << std::endl;
//	std::cout << "Base下的m_a = " << Base::m_a << std::endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
