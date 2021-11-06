#include "Orc.h"
#include <iostream>


Orc::Orc()
{
	this->setMonsterType("Orc");
	m_hp = 10;
}

void Orc::printClassInfo()
{
	std::cout << "This is in the Orc class!" << std::endl;
}
