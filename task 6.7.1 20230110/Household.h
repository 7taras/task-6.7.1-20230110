#pragma once
#include "IGoods.h"

class Household :
    virtual public IGoods
{
public:
    Household(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int power);
    ~Household();
    void show() override;
protected:
    unsigned int m_power;
};


class Washmachine final : 
    public Household
{
public:
	Washmachine(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int power, unsigned int volume);
	~Washmachine();
    void show() override;
protected:
    unsigned int m_volume;
};