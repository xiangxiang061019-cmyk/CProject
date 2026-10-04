//#include <iostream>
//#include <string>
//class person
//{
//public:
//	person():m_a(0),m_b(0)
//	{
//
//	};
//	person(int a,int b):m_a(a),m_b(b)
//	{
//
//	}
//	//成员函数实现+号运算符重载
//	person operator+(const person&p)
//	{
//		person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//public:
//	int m_a;
//	int m_b;
//};
////全局函数实现+号运算符重载
////person operator+(const person&p1,const person&p2)
////{
////	person temp(0,0);
////	temp.m_a = p1.m_a + p2.m_a;
////	temp.m_b = p2.m_b + p2.m_b;
////	return temp;
////}
//
//person operator+(const person&p,int val)
//{
//	person temp;
//	temp.m_a = p.m_a + val;
//	temp.m_b = p.m_b + val;
//	return temp;
//}
//
//void test01()
//{
//	person p1(10, 10);
//	person p2(20, 20);
//	person p3 = p1 + p2;
//	std::cout << "m_a=" << p3.m_a << std::endl;
//	std::cout << "m_b=" << p3.m_b << std::endl;
//
//	person p4 = p3 + 20;
//	std::cout << "m_a=" << p4.m_a << std::endl;
//	std::cout << "m_b=" << p4.m_b << std::endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}