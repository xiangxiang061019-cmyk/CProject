//#include "iostream"
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout<<"无参构造函数" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout<<"有参构造函数" << endl;
//	}
//	person(const person &p)
//	{
//		age = p.age;
//		cout<<"拷贝构造函数" << endl;
//	}
//	//析构函数
//	~person()
//	{
//		cout<<"析构函数调用" << endl;
//	}
//private:
//	int age = 18;
//};
//
////调用
//void test01()
//{
//	//括号法
//	//person p;
//	//person p1(10);
//	//person p2(p);
//	//显示法
//	person p1;
//	person p2 = person(10);//有参构造
//	//拷贝构造
//	person p3 = person(p2);//拷贝构造
//	//隐式转换法
//	person p4 = 10;
//	person p5 = p4;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}