#pragma once
#include <iostream>

class WorkerManager
{
public:
    // 构造函数
    WorkerManager();
    // 析构函数
    ~WorkerManager();
    void Show_Menu();
    void ExitSystem();
    void Add_Emp();
public:
    int m_EmpNum;
    Worker **m_EmpArray;
};
