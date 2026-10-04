//#include <iostream>
//using namespace std;
//int button;//用户按键
//const int MAX = 1000;
////联系人结构体
//struct Contact_Person
//{
//	string name;
//	string gender;
//	int age;
//	string telephone_number;
//	string Home_address;
//};
////通讯录
//struct Tongxulu
//{
//	struct Contact_Person contact_person[MAX];
//	int size;
//};
//
//void interface(void);
//void Show_Add_Contact(struct Tongxulu* abs);
//void add_Person(struct Tongxulu* abs);
//void show_person(struct Tongxulu* abs);
//int Find_contact_location(struct Tongxulu* abs, string name);
//Contact_Person Delete_contact(struct Tongxulu* abs);
//void find_contacts(struct Tongxulu* abs);
//void Edit_contact(struct Tongxulu* abs);
//void Delete_all_function(struct Tongxulu* abs);
//int main()
//{
//	//初始化结构体
//	struct Tongxulu abs;
//	abs.size = 0;
//	while (1)
//	{
//		interface();
//		cout << "请选择要使用的功能：" << "";
//		cin >> button;
//		switch (button)
//		{
//		case 1://添加联系人
//			add_Person(&abs);
//			break;
//		case 2://显示联系人
//			show_person(&abs);
//			break;
//		case 3://删除联系人
//			Delete_contact(&abs);
//			break;
//		case 4://查看联系人
//			find_contacts(&abs);
//			break;
//		case 5://修改联系人
//			Edit_contact(&abs);
//			break;
//		case 6://清空联系人
//			Delete_all_function(&abs);
//			break;
//		case 0://退出通讯录
//			cout << "欢迎下次使用" << endl;
//			system("pause");
//			return 0;
//			break;
//		default:
//			cout << "输入错误，请重新输入" << "";
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//
////显示函数
//void interface(void)
//{
//	cout << "****************************" << endl;
//	cout << "****\t1.添加联系人\t****" << endl;
//	cout << "****\t2.显示联系人\t****" << endl;
//	cout << "****\t3.删除联系人\t****" << endl;
//	cout << "****\t4.查看联系人\t****" << endl;
//	cout << "****\t5.修改联系人\t****" << endl;
//	cout << "****\t6.清空联系人\t****" << endl;
//	cout << "****\t0.退出通讯录\t****" << endl;
//	cout << "****************************" << endl;
//}
////添加联系人函数
//void add_Person(struct Tongxulu*abs)
//{
//	//确认添加按键
//	int usr_keypoard;
//	//添加名字
//	fg_name:
//	string usr_name;
//	cout << "请输入联系人姓名:\t" << endl;
//	cin >> usr_name;
//	abs->contact_person[abs->size].name = usr_name;
//	//添加联系人性别
//	fg_gender:
//	int sur_gender;
//	cout << "请输入联系人性别:\t" << endl;
//	cout << "输入1--男" << endl;
//	cout << "输入2--女" << endl;
//	cin >> sur_gender;
//	if (sur_gender == 1 || sur_gender == 2)
//	{
//		if (sur_gender == 1)
//		{
//			abs->contact_person[abs->size].gender = "男";
//		}
//		else
//		{
//			abs->contact_person[abs->size].gender = "女";
//		}
//		
//	}
//	else
//	{
//		cout << "哟，你还挺特别" << endl;
//		goto fg_gender;
//	}
//	//添加年龄
//	fg_age:
//	int usr_age;
//	cout << "请输入年龄:\t" << endl;
//	cin >> usr_age;
//	if (usr_age>0&& usr_age<150)
//	{
//		abs->contact_person[abs->size].age = usr_age;
//	}
//	else
//	{
//		cout << "真活了真么久,我不信:\t" << endl;
//		goto fg_age;
//	}
//	//添加电话号码
//	fg_number:
//	string usr_number;
//	cout << "请输入11位电话号码:\t" << endl;
//	cin >> usr_number;
//	int number_len = usr_number.length();
//	if (number_len>0&& number_len==11)
//	{
//		abs->contact_person[abs->size].telephone_number = usr_number;
//	}
//	else
//	{
//		cout << "输入有误，请重新输入:\t" << endl;
//		goto fg_number;
//	}
//	//添加家庭住址
//	string usr_home_address;
//	cout << "请输入联系人家庭住址:\t" << endl;
//	cin >> usr_home_address;
//	abs->contact_person[abs->size].Home_address = usr_home_address;
//	cout << "请确认信息" << endl;
//	Show_Add_Contact(abs);
//	cout << "如果有错误请按按键1修改,保存请按按键0" << endl;
//	cin >> usr_keypoard;
//	if (usr_keypoard==1)
//	{
//		system("pause");
//		system("cls");
//		goto fg_name;
//	}
//	else if(usr_keypoard==0)
//	{
//		abs->size++;
//		system("pause");
//		system("cls");
//	}
//	
//}
////确认添加显示信息函数
//void Show_Add_Contact(struct Tongxulu* abs)
//{
//	cout << "联系人的姓名:\t" << abs->contact_person[abs->size].name
//		<< "\t联系人的性别:\t" << abs->contact_person[abs->size].gender
//		<< "\t联系人年龄:\t" << abs->contact_person[abs->size].age
//		<< "\t联系人的电话号码:\t" << abs->contact_person[abs->size].telephone_number
//		<< "\t联系人的家庭住址:\t" << abs->contact_person[abs->size].Home_address << endl;
//}
////显示联系人函数
//void show_person(struct Tongxulu* abs)
//{
//	if (abs->size==0)
//	{
//		cout << "没有联系人" << endl;
//	}
//	else
//	{
//		for (int i =0;i<abs->size;i++)
//		{
//			cout << "联系人的姓名:\t" << abs->contact_person[i].name
//				<< "\t联系人的性别:\t" << abs->contact_person[i].gender
//				<< "\t联系人年龄:\t" << abs->contact_person[i].age
//				<< "\t联系人的电话号码:\t" << abs->contact_person[i].telephone_number
//				<< "\t联系人的家庭住址:\t" << abs->contact_person[i].Home_address << endl;
//		}
//		
//	}
//	system("pause");
//	system("cls");
//}
////查找联系人位置函数
//int Find_contact_location(struct Tongxulu* abs,string name)
//{
//	if (abs->size!=0)
//	{
//		for (int i = 0;i < abs->size;i++)
//		{
//			if (abs->contact_person[i].name == name)
//			{
//				return i;
//			}
//		}
//	}
//	return -1;
//}
////删除联系人
//Contact_Person Delete_contact(struct Tongxulu* abs)
//{
//	string usr_name;
//	cout << "请输入你要删除的联系人:\t" << endl;
//	cin >> usr_name;
//	int i = Find_contact_location(abs, usr_name);
//	if (i!=-1)
//	{
//		struct Contact_Person temp;
//		temp = abs->contact_person[i];
//		for (int j = i;j<abs->size-1;j++)
//		{
//			abs->contact_person[j] = abs->contact_person[j + 1];
//		}
//		cout << "删除成功" << endl;
//		abs->size--;
//		system("pause");
//		system("cls");
//		return temp;
//	}
//	else
//	{
//		cout << "没有该联系人" << endl;
//	}
//	system("pause");
//	system("cls");
//}
////查找联系人函数
//void find_contacts(struct Tongxulu* abs)
//{
//	string usr_name;
//	cout << "请输入你要查找的联系人:\t" << endl;
//	cin >> usr_name;
//	int i = Find_contact_location(abs, usr_name);
//	if (i != -1)
//	{
//		cout << "联系人的姓名:\t" << abs->contact_person[i].name
//			<< "\t联系人的性别:\t" << abs->contact_person[i].gender
//			<< "\t联系人年龄:\t" << abs->contact_person[i].age
//			<< "\t联系人的电话号码:\t" << abs->contact_person[i].telephone_number
//			<< "\t联系人的家庭住址:\t" << abs->contact_person[i].Home_address << endl;
//	}
//	else
//	{
//		cout <<"没有该联系人" << endl;
//	}
//	system("pause");
//	system("cls");
//}
////修改联系人函数
//void Edit_contact(struct Tongxulu* abs)
//{
//	string usr_name;
//	cout << "请输入你要修改的联系人:\t" << endl;
//	cin >> usr_name;
//	int res = Find_contact_location(abs, usr_name);
//	if (res != -1)
//	{
//		//确认添加按键
//		int usr_keypoard;
//		//添加名字
//	fg_name:
//		string usr_name;
//		cout << "请输入联系人姓名:\t" << endl;
//		cin >> usr_name;
//		abs->contact_person[res].name = usr_name;
//		//添加联系人性别
//	fg_gender:
//		int sur_gender;
//		cout << "请输入联系人性别:\t" << endl;
//		cout << "输入1--男" << endl;
//		cout << "输入2--女" << endl;
//		cin >> sur_gender;
//		if (sur_gender == 1 || sur_gender == 2)
//		{
//			if (sur_gender == 1)
//			{
//				abs->contact_person[res].gender = "男";
//			}
//			else
//			{
//				abs->contact_person[res].gender = "女";
//			}
//
//		}
//		else
//		{
//			cout << "哟，你还挺特别" << endl;
//			goto fg_gender;
//		}
//		//添加年龄
//	fg_age:
//		int usr_age;
//		cout << "请输入年龄:\t" << endl;
//		cin >> usr_age;
//		if (usr_age > 0 && usr_age < 150)
//		{
//			abs->contact_person[res].age = usr_age;
//		}
//		else
//		{
//			cout << "真活了真么久,我不信:\t" << endl;
//			goto fg_age;
//		}
//		//添加电话号码
//	fg_number:
//		string usr_number;
//		cout << "请输入11位电话号码:\t" << endl;
//		cin >> usr_number;
//		int number_len = usr_number.length();
//		if (number_len > 0 && number_len == 11)
//		{
//			abs->contact_person[res].telephone_number = usr_number;
//		}
//		else
//		{
//			cout << "输入有误，请重新输入:\t" << endl;
//			goto fg_number;
//		}
//		//添加家庭住址
//		string usr_home_address;
//		cout << "请输入联系人家庭住址:\t" << endl;
//		cin >> usr_home_address;
//		abs->contact_person[res].Home_address = usr_home_address;
//		cout << "请确认信息" << endl;
//		Show_Add_Contact(abs);
//		cout << "如果有错误请按按键1修改,保存请按按键0" << endl;
//		cin >> usr_keypoard;
//		if (usr_keypoard == 1)
//		{
//			system("pause");
//			system("cls");
//			goto fg_name;
//		}
//		else if (usr_keypoard == 0)
//		{
//			system("pause");
//			system("cls");
//		}
//	}
//	else
//	{
//		cout << "没有该联系人" << endl;
//	}
//	system("pause");
//	system("cls");
//}
////全部删除函数
//void Delete_all_function(struct Tongxulu* abs)
//{
//	int usr_keyboard;
//	cout << "这是通讯录的全部信息:" << endl;
//	show_person(abs);
//	cout << "你确定要全部删除吗，确定请按数字1" << endl;
//	cin >> usr_keyboard;
//	if (usr_keyboard==1)
//	{
//		abs->size = 0;
//		cout << "删除成功" << endl;
//		system("pause");
//		system("cls");
//	}
//	else
//	{
//		system("pause");
//		system("cls");
//	}
//
//
//}
