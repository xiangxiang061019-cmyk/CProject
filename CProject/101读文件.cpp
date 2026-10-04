//#include <iostream>
//#include <fstream>
//#include <string>
//
//void test01()
//{
//	std::ifstream ifs;
//	ifs.open("C:\\Users\\xiang\\Desktop\\TEST\\text.txt",std::ios::in);
//	if (!ifs.is_open())
//	{
//		std::cout << "文件打开失败" << std::endl;
//	}
//	//第一种
//	//char buff[1000] = {};
//	//while (ifs>>buff)
//	//{
//	//	std::cout << buff<<std::endl;
//	//}
//	// 第二种
//	//char buff[500] = {};
//	//while (ifs.getline(buff,sizeof(buff)))
//	//{
//	//	std::cout << buff << std::endl;
//	//}
//	//第三种
//	//std::string st;
//	//while (std::getline(ifs,st))
//	//{
//	//	std::cout << st << std::endl;
//	//}
//	// 第四种
//	char c;
//	while ((c=ifs.get())!=EOF)
//	{
//		std::cout << c;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}