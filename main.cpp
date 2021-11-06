// FactoryTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Troll.h"
#include "Orc.h"
#include "MonsterFactory.h"


int main()
{
    //std::cout << "Hello World!\n";
    //Troll trollObj;
    //Orc orcObj;

    //orcObj.setName("Ogar");
    //trollObj.setName("Freddy");
    //trollObj.printMonsterStatus();
    //orcObj.printMonsterStatus();

    //Troll newTroll;
    //newTroll.printMonsterStatus();
    /////////////////////////
    // Ta in ett nr som motsvarar en type (Det här kommer vara en enum sen)
    //skicka det numret till create Monster i MonsterFactory, den måste vara static
    // Den returnar en pekare till Troll eller Orc dvs ett monster object object.
    // Eftersom man inte vet vilket object det kommer vara vid runtime så måste det hamna i parent classen 
    //dvs Monster. Och det är DÄRFÖR virtule är viktigt så även om det är ett Monster object så kallar vi på Child 
    // funktionerna

    int type;
    while (1)
    {
        std::cout << "Enter a  nr, 1 is Orc 2 is troll, 0 exits" << std::endl;
        std::cin >> type;
        if (!type)
            break;
        Monster* monster_p = MonsterFactory::createMonster(type);
        if (monster_p)
        {
            monster_p->printMonsterStatus();
            monster_p->printClassInfo();
            delete monster_p;
        }
    }
    std::cout << "exiting.." << std::endl;




    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
