#pragma once
#include <iostream>
#include "worker.h"

//创建普通员工类
class Employee : public Worker
{
public:
    // 构造函数
    Employee(int id, std::string name, int did);
    // 显示个人信息
    virtual void ShowInfo();
    // 显示职工岗位
    virtual std::string GetDeptName();
};