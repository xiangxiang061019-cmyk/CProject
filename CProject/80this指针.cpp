//#include "iostream"
//
//class person {
//public:
//	//构造函数
//	person(int age):age(age)
//	{
//
//	}
//	person& personAddperson(const person&p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//
//void test01()
//{
//	person p1(18);
//	std::cout << p1.age << std::endl;
//	person p2(p1);
//	p2.personAddperson(p1).personAddperson(p1);
//	std::cout << "p2.age=" << p2.age << std::endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}