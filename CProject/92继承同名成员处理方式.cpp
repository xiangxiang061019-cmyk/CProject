//#include <iostream>
//
//class Base {
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		std::cout << "Base - func()调用" << std::endl;
//	}
//
//	void func(int a)
//	{
//		std::cout << "Base - func(int a)调用" << std::endl;
//	}
//
//public:
//	int m_A;
//};
//
//
//class Son : public Base {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		std::cout << "Son - func()调用" << std::endl;
//	}
//public:
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//
//	std::cout << "Son下的m_A = " << s.m_A << std::endl;
//	std::cout << "Base下的m_A = " << s.Base::m_A << std::endl;
//
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//
//}
//int main() {
//
//	test01();
//	return EXIT_SUCCESS;
//}