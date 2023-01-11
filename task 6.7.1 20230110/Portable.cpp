#include "Portable.h"
#include <iostream>

Portable::Portable(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int accuTime) : m_accuTime(accuTime)
{
	m_weight = weight;
	m_warrantyPeriod = warrantyPeriod;
	m_brand = brand;
}

Portable::~Portable()
{
}

void Portable::show()
{
	std::cout << "Basic portable device  " << m_brand << ". Model data:" << std::endl;
	std::cout << "Weight: " << m_weight << " kg." << std::endl;
	std::cout << "Operation time: " << m_accuTime << " minutes." << std::endl;
	std::cout << "Warranty Period: " << m_warrantyPeriod << " years." << std::endl << std::endl;
}

Smartphone::Smartphone(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int accuTime, const char* os) : Portable(weight, warrantyPeriod, brand, accuTime), m_os(os)
{
}

Smartphone::~Smartphone()
{
}

void Smartphone::show()
{
	std::cout << "Basic portable device  " << m_brand << ". Model data:" << std::endl;
	std::cout << "Weight: " << m_weight << " kg." << std::endl;
	std::cout << "Operation time: " << m_accuTime << " minutes." << std::endl;
	std::cout << "Operation system: " << m_os << '.' << std::endl;
	std::cout << "Warranty Period: " << m_warrantyPeriod << " years." << std::endl << std::endl;
}
