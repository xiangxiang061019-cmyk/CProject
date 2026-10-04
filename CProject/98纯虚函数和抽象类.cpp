//#include <iostream>
//
//class Base {
//	/*
//	* 纯虚函数
//	* 类中只要有一个纯虚函数就称为抽象类
//	* 抽象类无法实例化对象
//	* 子类必须从写父类中的纯虚函数，否则也属于抽象类
//	*/
//	
//public:
//	virtual void func() = 0;
//};
//
//class Son : public Base {
//	void func()
//	{
//		std::cout << "func调用" << std::endl;
//	}
//};
//
//void test01()
//{
//	Base* base = nullptr;
//	base = new Son;
//	base->func();
//	delete base;
//}
//int main()
//{
//	test01();
//	return 0;
//}