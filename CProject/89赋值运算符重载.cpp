//#include <iostream>
//
//class person {
//public:
//	person(int age)
//	{
//		this->age = new int(age);
//	}
//	person& operator=(const person&p)
//	{
//		if (this == &p)
//		{
//			return *this;
//		}
//		else
//		{
//			if (this->age != nullptr)
//			{
//				delete this->age;
//				this->age = nullptr;
//			}
//			this->age = new int(*p.age);
//			return *this;
//		}
//		
//		
//	}
//	~person()
//	{
//		delete this->age;
//		this->age = nullptr;
//	}
//	int* age;
//};
//void test01()
//{
//	person p1(10);
//	person p2(20);
//	person p3(30);
//	//p3 = p2 = p1;
//	p1 = p1;
//	std::cout << "p1的年龄：" << *p1.age <<std:: endl;
//	std::cout << "p2的年龄：" << *p2.age << std::endl;
//	std::cout << "p3的年龄：" << *p3.age << std::endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}