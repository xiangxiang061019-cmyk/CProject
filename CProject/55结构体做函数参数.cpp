//#include <iostream>
//#include <string>
//using namespace std;
////创建结构体
//struct Student
//{
//	string name;
//	int age;
//};
////值传递函数
//void print_struct1(struct Student s1)
//{
//	cout << "学生姓名: " << s1.name << "\t学生年龄: " << s1.age << endl;
//}
////地址传递函数
//void print_struct2(const struct Student *s1)
//{
//	//加上const后，只能读数据，不能改数据
//	cout << "学生姓名: " <<s1->name<< "\t学生年龄: " << s1->age << endl;
//}
//int main()
//{
//	//创建结构体变量
//	struct Student s1;
//	s1.name = "小王";
//	s1.age = 20;
//	print_struct1(s1);
//	print_struct2(&s1);
//	system("pause");
//	return 0;
//}