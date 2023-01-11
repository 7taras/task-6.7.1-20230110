#pragma once
#include "Household.h"
#include "Portable.h"
#include "IGoods.h"

class VacuumCleaner final :
    public Household, Portable
{
public:
    VacuumCleaner(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int power, unsigned int accuTime);
    ~VacuumCleaner();
    void show() override;
};