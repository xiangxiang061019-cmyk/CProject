#pragma once
#include <iostream>
#include <string>

//创建员工抽象类
class Worker
{
public:
    // 显示个人信息
    virtual void ShowInfo() = 0;
    virtual std::string GetDeptName() = 0;

public:
    int m_id;           // 职工的编号
    std::string m_name; // 职工的姓名
    int m_deptid;       // 职工的部门
};