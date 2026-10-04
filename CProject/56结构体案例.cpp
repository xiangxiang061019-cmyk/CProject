//#include <iostream>
//#include <string>
//using namespace std;
//
////创建学生结构体
//struct Student
//{
//	string name;
//	int age;
//};
////创建老师结构体
//struct Teacher
//{
//	string name;
//	int age;
//	int id;
//	//创建结构体数组
//    struct Student student[5];
//};
////信息赋值函数
//void add_arr(struct Teacher teacherArr[],int Teacher_len,int Student_len)
//{
//	string nameseep = "ABCDEF";
//	for (int  i = 0; i < Teacher_len; i++)
//	{
//		teacherArr[i].name = "Teacher_";
//		teacherArr[i].name += nameseep[i];
//		teacherArr[i].age = 30 - i;
//		teacherArr[i].id = 10086 + i;
//		for (int j=0;j<Student_len;j++)
//		{
//			teacherArr[i].student[j].name = "Student_";
//			teacherArr[i].student[j].name = nameseep[j];
//			teacherArr[i].student[j].age = 15 + j;
//		}
//		
//	}
//};
//void printinfo(struct Teacher teacherArr[], int Teacher_len, int Student_len)
//{
//	for (int i =0;i< Teacher_len;i++)
//	{
//		cout << "老师的姓名:\t" << teacherArr[i].name
//			<< "\t老师的年龄:\t" << teacherArr[i].age
//			<< "\t老师的ID:\t" << teacherArr[i].id << endl;
//		for (int j = 0; j <Student_len; j++)
//		{
//			cout << "学生的姓名:\t" << teacherArr[i].student[j].name
//				<< "\t学生的年龄:\t" << teacherArr[i].student[j].age << endl;
//		}
//	}
//}
////冒泡排序算法
//void Bubble_Sort(struct Teacher teacherArr[], int Teacher_len, int Student_len)
//{
//	for (int i =0;i<Teacher_len;i++)
//	{
//		//对学生年龄进行排序,降序排序
//		for (int j = 0;j < Student_len - 1;j++)
//		{
//			for (int  K = 0; K <Student_len-j-1; K++)
//			{
//				if (teacherArr[i].student[K].age< teacherArr[i].student[K+1].age)
//				{
//					struct Student student_temp = teacherArr[i].student[K];
//					teacherArr[i].student[K] = teacherArr[i].student[K + 1];
//					teacherArr[i].student[K + 1] = student_temp;
//				}
//			}
//		}
//	}
//	//对老师年龄进行排序,升序排序
//	for (int i = 0;i< Teacher_len -1;i++)
//	{
//		for (int j =0;j< Teacher_len -i-1;j++)
//		{
//			if (teacherArr[j].age>teacherArr[j+1].age)
//			{
//				struct Teacher teacher_temp=teacherArr[j];
//				teacherArr[j] = teacherArr[j + 1];
//				teacherArr[j+ 1] = teacher_temp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	struct Teacher teacherArr[3];
//	int Teacher_len = sizeof(teacherArr) / sizeof(teacherArr[0]);
//	int Student_len = sizeof(teacherArr->student) / sizeof(teacherArr->student[0]);
//	add_arr(teacherArr, Teacher_len, Student_len);
//	Bubble_Sort(teacherArr, Teacher_len, Student_len);
//	printinfo(teacherArr, Teacher_len, Student_len);
//	system("pause");
//	return 0;
//}