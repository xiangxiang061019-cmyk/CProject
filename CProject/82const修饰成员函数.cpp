//#include "iostream"
//
//
//class person {
//public:
//	person()
//	{
//		this->a = 0;
//		this->b = 0;
//	}
//	void showperson()const
//	{
//		this->b = 100;
//	}
//
//	void MyFunc()
//	{
//		this->a = 1000;
//	}
//public:
//	int a;
//	mutable int b;
//};
//
//void test01()
//{
//	const person p1;
//	std::cout << p1.a << std::endl;
//	p1.b = 200;
//	std::cout << p1.b << std::endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}