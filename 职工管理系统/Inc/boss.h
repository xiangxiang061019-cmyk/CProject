#pragma once
#include <iostream>
#include <string>
#include "worker.h"

class Boss:public Worker
{
    public:
    Boss(int id,std::string name,int did);
    virtual void ShowInfo();
    virtual std::string GetDeptName();
};