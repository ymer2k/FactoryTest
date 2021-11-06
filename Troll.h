#pragma once
#include "Monster.h"
class Troll : public Monster
{
public:
	Troll();
	std::string m_monsterType = "Troll";

	void printClassInfo();


};

