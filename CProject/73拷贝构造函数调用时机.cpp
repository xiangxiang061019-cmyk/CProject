//#include "iostream"
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout<<"person默认构造函数调用" << endl;
//	}
//	person(const person &p )
//	{
//		age = p.age;
//		cout << "拷贝构造函数调用" <<age<< endl;
//	}
//	person(int age)
//	{
//		int m_age = age;
//		cout << "有参构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout<<"person析构函数调用" << endl;
//	}
//private:
//	int age=10;
//};
//
//void test01()
//{
//	person p1();
//	person p2(10);
//	person p3(p2);
//
//}
////值传递的方式给函数参数传值
//void dowork(person p)
//{
//
//}
//void test02()
//{
//	person p;
//	dowork(p);
//}
////值方式返回局部变量
//person dpork2()
//{
//	person p1;
//	return person(p1);
//}
//void test03()
//{
//	person p = dpork2();
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//} 