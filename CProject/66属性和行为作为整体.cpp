#include <iostream>
using namespace std;

const double PI = 3.14;
//设计一个类
class Circle
{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	double m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//创建一个圆的类
	//实例化
	Circle c1;
	c1.m_r = 10;
	cout << "圆的周长:" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}