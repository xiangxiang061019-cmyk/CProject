//#include <iostream>
//
//
//class MyInteger
//{
//friend std::ostream& operator<<(std::ostream& out, const MyInteger p);
//public:
//	MyInteger():m_Num(0)
//	{
//
//	}
//	//Ç°ÖÃ++
//	MyInteger& operator++()
//	{
//		this->m_Num++;
//		return *this;
//	}
//	MyInteger& operator++(int)
//	{
//		MyInteger temp = *this;
//		this->m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//std::ostream& operator<<(std::ostream&out, const MyInteger p)
//{
//	out << p.m_Num;
//	return out;
//}
//
//void test01()
//{
//	MyInteger p;
//	std::cout << ++p << std::endl;
//	std::cout << p <<std:: endl;
//	
//}
//void test02()
//{
//	MyInteger p;
//	std::cout << p++ << std::endl;
//	std::cout << p << std::endl;
//
//}
//int main()
//{
//	test02();
//	return 0;
//}