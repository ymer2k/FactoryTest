#pragma once
#include <string>
class Monster
{
public:
	Monster();
	std::string getName();
	int getHp();

	void printMonsterStatus();
	virtual void printClassInfo();


	void setName(std::string name);
	void setHp(int hp);
	void setMonsterType(std::string type);

	void setDefaultValues();

private:
	std::string m_name;
	std::string m_monsterType;

protected:
	int m_hp;
};

