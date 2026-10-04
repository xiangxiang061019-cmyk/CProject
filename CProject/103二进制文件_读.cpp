#include <iostream>
#include <fstream>
#include <string>
class person
{
public:
	char m_name[100];
	int m_age;
};

void test01()
{
	std::ifstream ifs("C:\\Users\\xiang\\Desktop\\TEST\\text01.txt",std::ios::in|std::ios::binary);
	if (!ifs.is_open())
	{
		std::cout << "文件打开失败" << std::endl;
	}
	person p;
	ifs.read((char*)&p,sizeof(p));
	std::cout << "m_name:" << p.m_name << "m_age:" << p.m_age << std::endl;
}
int main()
{
	test01();
	return 0;
}