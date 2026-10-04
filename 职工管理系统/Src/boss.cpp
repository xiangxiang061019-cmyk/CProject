#include "boss.h"

Boss::Boss(int id,std::string name,int did)
{
    this->m_id = id;
    this->m_name = name;
    this->m_deptid = did;
}
void Boss::ShowInfo()
{
    std::cout << "职工编号:" << this->m_id << std::endl;
    std::cout << "职工姓名:" << this->m_name << std::endl;
    std::cout << "职工部门:" << this->GetDeptName() << std::endl;
}
std::string Boss::GetDeptName()
{
    return std::string("老板");
}