#pragma once
#include "IGoods.h"

class Portable :
    virtual public IGoods
{
public:
    Portable(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int accuTime);
    ~Portable();
    void show() override;
protected:
    unsigned int m_accuTime = 0;
};


class Smartphone final : 
    public Portable
{
public:
    Smartphone(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int accuTime, const char* os);
    ~Smartphone();
    void show() override;
protected:
    const char* m_os = nullptr;
};