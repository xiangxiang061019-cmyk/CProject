//#include <iostream>
//
//class Base1 {
//public:
//	Base1()
//	{
//		this->m_a = 100;
//	}
//public:
//	int m_a;
//};
//
//class Base2 {
//public:
//	Base2()
//	{
//		this->m_a = 200;
//	}
//public:
//	int m_a;
//};
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		this->m_a = 300;
//	}
//public:
//	int m_a;
//};
//
//void test01()
//{
//	Son s1;
//	std::cout << "Base1下的m_a=" << s1.Base1::m_a << std::endl;
//	std::cout << "Base2下的m_a=" << s1.Base2::m_a << std::endl;
//	std::cout << "Son下的m_a=" << s1.Son::m_a << std::endl;
//
//	
//}
//int main()
//{
//	test01();
//	return 0;
//}