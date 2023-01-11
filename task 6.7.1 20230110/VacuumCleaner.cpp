#include "VacuumCleaner.h"
#include <iostream>

VacuumCleaner::VacuumCleaner(unsigned int weight, unsigned int warrantyPeriod, const char* brand, unsigned int power, unsigned int accuTime) : Household(weight, warrantyPeriod, brand, power), Portable(weight, warrantyPeriod, brand, accuTime)
{
}

VacuumCleaner::~VacuumCleaner()
{
}

void VacuumCleaner::show()
{
	std::cout << "Vacuum Cleaner " << m_brand << ". Model data:" << std::endl;
	std::cout << "Weight: " << m_weight << " kg." << std::endl;
	std::cout << "Power: " << m_power << " W." << std::endl;
	std::cout << "Operation time: " << m_accuTime << " minutes." << std::endl;
	std::cout << "Warranty Period: " << m_warrantyPeriod << " years." << std::endl << std::endl;
}