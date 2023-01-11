#pragma once

class IGoods
{
public:
    IGoods();
    virtual ~IGoods() = default;
    virtual void show() = 0;
protected:
    unsigned int m_weight = 0;
    unsigned int m_warrantyPeriod = 0;
    const char* m_brand = nullptr;
};