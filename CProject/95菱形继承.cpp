//#include <iostream>
//
//
//class Animal
//{
//public:
//	int m_Age;
//};
//
//class Shepp :virtual public Animal {};
//class Tou : virtual public Animal {};
//class AheppTou :public Shepp, public Tou {};
//
//
//void test01()
//{
//	AheppTou st;
//	st.Shepp::m_Age = 100;
//	st.Tou::m_Age = 200;
//	std::cout << "st.Shepp::m_Age=" << st.Shepp::m_Age << std::endl;
//	std::cout << "st.Tou::m_Age=" << st.Tou::m_Age << std::endl;
//	std::cout << "st.m_Age=" << st.m_Age << std::endl;
//
//
//}
//int main()
//{
//
//	test01();
//	return 0;
//}