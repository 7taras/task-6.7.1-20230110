// task 6.7.1 20230110.cpp 

#include <iostream>
#include "IGoods.h"
#include "Portable.h"
#include "Household.h"
#include "VacuumCleaner.h"

#define GOODSCOUNT 5 // количество единиц товара в магазине

int main()
{
    IGoods* shop[GOODSCOUNT];
    bool open = true;
    int choose = 0;

    shop[0] = new Portable(1, 2, "Sony", 120);
    shop[1] = new Household(11, 5, "Bosch", 1200);
    shop[2] = new Smartphone(0, 3, "iPhone", 680, "iOS");
    shop[3] = new Washmachine(24, 4, "Ariston", 2400, 50);
    shop[4] = new VacuumCleaner(10, 1, "Dysson", 1600, 30);
    
    while (open)
    {
        std::cout << "Please, choose device: 1 - Portable, 2 - Household, 3 - Smartphone, 4 - Washmachine, 5 - Vacuum Cleaner, 0 - to exit" << std::endl;
        int choose = 0;
        std::cin >> choose;

        switch (choose)
        {
        case 1:
            shop[0]->show();
            break;
        case 2:
            shop[1]->show();
            break;
        case 3:
            shop[2]->show();
            break;
        case 4:
            shop[3]->show();
            break;
        case 5:
            shop[4]->show();
            break;
        case 0:
            open = false;
            break;
        default:
            break;
        }
    }

    for (auto i = 0; i < GOODSCOUNT; ++i)
    {
        delete shop[i];
    }

    return 0;
}