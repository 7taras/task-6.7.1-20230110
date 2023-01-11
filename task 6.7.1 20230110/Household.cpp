#include "Household.h"
#include <iostream>

Household::Household(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int power) : m_power(power)
{
	m_weight = weight;
	m_warrantyPeriod = warrantyPeriod;
	m_brand = brand;
}

Household::~Household()
{
}

void Household::show()
{
	std::cout << "Basic household device  " << m_brand << ". Model data:" << std::endl;
	std::cout << "Weight: " << m_weight << " kg." << std::endl;
	std::cout << "Power: " << m_power << " W." << std::endl;
	std::cout << "Warranty Period: " << m_warrantyPeriod << " years." << std::endl << std::endl;
}


Washmachine::Washmachine(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int power, unsigned int volume) : Household(weight, warrantyPeriod, brand, power), m_volume(volume)
{
}

Washmachine::~Washmachine()
{
}

void Washmachine::show()
{
	std::cout << "Washmashine " << m_brand << ". Model data:" << std::endl;
	std::cout << "Weight: " << m_weight << " kg." << std::endl;
	std::cout << "Power: " << m_power << " W." << std::endl;
	std::cout << "Volume: " << m_volume << " litres." << std::endl;
	std::cout << "Warranty Period: " << m_warrantyPeriod << " years." << std::endl << std::endl;
}