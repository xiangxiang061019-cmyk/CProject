#pragma once
#include <iostream>
#include <string>
#include "worker.h"

//创建经理类
class Manager : public Worker
{
public:
    Manager(int id, std::string name, int did);
    // 显示个人信息
    virtual void ShowInfo();
    // 获取职工
    virtual std::string GetDeptName();
};