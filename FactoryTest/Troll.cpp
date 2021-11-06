#include "Troll.h"
#include <iostream>


Troll::Troll()
{
	this->setMonsterType("Troll");
	m_hp = 12;
}

void Troll::printClassInfo()
{
	std::cout << "This is in the Troll class!" << std::endl;
}
