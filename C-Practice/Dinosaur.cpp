#include "Dinosaur.h"
#include <typeinfo> //For Debugging

int Dinosaur::AttackStomp()
{
    return (GetStrength() * 2);
}

int Dinosaur::AttackTail()
{
    return (GetDexterity() + GetStrength());
}

int Dinosaur::DamageBlock()
{
    int armor = GetConstitution() * 3;
    return armor;
}

int Dinosaur::GetActions(bool isPlayer, std::vector<std::string> actionVector)
{
    // return 0 for block
    //int actionIndex = 0;
    std::string input;

    if (isPlayer == true) {
        std::cout << "Which action will you do?" << std::endl;
        std::cout << "Stomp, Tail, Block" << std::endl;
        std::cin >> input;
        //std::cout << input << ":Type:" << typeid(input).name() << std::endl; //For Debugging
        
        for (int actionIndex = 0; actionIndex <= actionVector.size(); actionIndex = (actionIndex + 1)) {
            if (input == actionVector[actionIndex]) {
                std::cout << "Action Index: " << actionIndex << std::endl; //For Debugging
                return actionIndex;
            }
            else {
                std::cout << "Action Index returned 0" << std::endl; //For Debugging
                std::cout << "Vector size: " << actionVector.size() << std::endl; //For Debugging
                return 0;
            }
        }
    }
    else {
        return 1;
    }
}

