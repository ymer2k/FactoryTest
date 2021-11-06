#include "Monster.h"
#include <iostream>


Monster::Monster()
{
    setDefaultValues();
}

std::string Monster::getName()
{
    return m_name;
}

int Monster::getHp()
{
    return m_hp;
}

void Monster::printMonsterStatus()
{
    std::cout << "Hello, my name is " << m_name << ". I am a "<< m_monsterType << " and I have " << m_hp << " HP! "<< std::endl;
}

void Monster::printClassInfo()
{
    std::cout << "This is in the Monster class!" << std::endl;
}




void Monster::setName(std::string name)
{
    m_name = name;
}

void Monster::setHp(int hp)
{
    m_hp = hp;
}

void Monster::setMonsterType(std::string type)
{
    m_monsterType = type;
}

void Monster::setDefaultValues()
{
    m_hp = 5;
    m_name = "Joe";
    m_monsterType = "No Type";
}
