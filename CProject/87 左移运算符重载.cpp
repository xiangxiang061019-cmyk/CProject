//#include <iostream>
//
//class person
//{
//friend std::ostream& operator<<(std::ostream& out, const person& p);
////friend void test01();
//
//public:
//	person(int a,int b):m_a(a),m_b(b)
//	{
//		//this->m_a = a;
//		//this->m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//std::ostream&operator<<(std::ostream& out,const person&p)
//{
//	out << "a=" << p.m_a << " " << "b=" << p.m_b;
//	return out;
//}
//
//void test01()
//{
//	person p1(10,20);
//	std::cout << p1 << std::endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}