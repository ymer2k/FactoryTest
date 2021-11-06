#include "MonsterFactory.h"
#include "Orc.h"
#include "Troll.h"
#include <iostream>


MonsterFactory::MonsterFactory()
{
	Monster *monster = NULL;
	monster = new Orc;
}

Monster* MonsterFactory::createMonster(int type)
{
	Monster *monster = NULL;
	switch (type)
	{
	case 1: 
		monster = new Orc;
		break;
	case 2:
		monster = new Troll;
		break;
	default:
		std::cout << "invalid type!" << std::endl;
		return NULL;
	}
	monster->setName("I was made inside of a factory!");
	return monster;
}


