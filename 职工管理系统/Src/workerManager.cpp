#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"


// WorkerManager：构造函数实现
WorkerManager::WorkerManager()
{
    this->m_EmpNum =0;
    this->m_EmpArray = nullptr;
}

// WorkerManager：析构函数实现
WorkerManager::~WorkerManager()
{
}

void WorkerManager::Show_Menu()
{
    std::cout << "*******************************************************" << std::endl;
    std::cout << "欢迎使用职工管理系统！" << std::endl;
    std::cout << "0 退出管理系统" << std::endl;
    std::cout << "1 增加职工信息" << std::endl;
    std::cout << "2 显示职工信息" << std::endl;
    std::cout << "3 删除职工信息" << std::endl;
    std::cout << "4 修改职工信息" << std::endl;
    std::cout << "5 查看职工信息" << std::endl;
    std::cout << "6 按照编号排序" << std::endl;
    std::cout << "7 清空所有文档" << std::endl;
}
void WorkerManager::ExitSystem()
{
    std::cout << "欢迎下次使用" << std::endl;
    exit(0);
}

//增加职工
void WorkerManager::Add_Emp()
{
    using namespace std;
    
	cout << "请输入增加职工数量： " << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//计算新空间大小
		int newSize = this->m_EmpNum + addNum;

		//开辟新空间
		Worker ** newSpace = new Worker*[newSize];

		//将原空间下内容存放到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//输入新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			std::string name;
			int dSelect;

			cout << "请输入第 " << i + 1 << " 个新职工编号：" << endl;
			cin >> id;


			cout << "请输入第 " << i + 1 << " 个新职工姓名：" << endl;
			cin >> name;


			cout << "请选择该职工的岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;


			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1: //普通员工
				worker = new Employee(id, name, 1);
				break;
			case 2: //经理
				worker = new Manager(id, name, 2);
				break;
			case 3:  //老板
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}


			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的个数
		this->m_EmpNum = newSize;

		//提示信息
		cout << "成功添加" << addNum << "名新职工！" << endl;
	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}