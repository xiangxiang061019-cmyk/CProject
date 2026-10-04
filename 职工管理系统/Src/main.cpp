#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"


int main()
{
    WorkerManager wm;
    int choice = 0;
    while (true)
    {
        wm.Show_Menu();
        std::cout << "请输入你的选择:" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            wm.ExitSystem();
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            break;
        }
    }
    return 0;
}