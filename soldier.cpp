#include "soldier.h"


Soldier::Soldier(string name_, string ability_){
    this->name = name_;
    this->ability = ability_;
}

void Soldier::report(){
    cout << "Name: " << this->name << endl;
    cout << "Ability: " << this->ability << endl;
}

void Soldier::attack(){
    cout << "Attaaaaaaaaaaaaaaaaaaaaaaaaack\n";
    cout << "kill the Enemieeeeeeeeeeeeeeeeeeeeeeeeeeeeees\n";
    Soldier::set_state("WAR");
}

void Soldier::defend(){
    cout << "Hold on army\n";
    cout << "Defend\n";
}

int Soldier::get_damageV(){
    return (this->damageValue);
}

void Soldier::set_damageV(int value){
    this->damageValue = value;
}

void Soldier::set_state(string state)
{
    this->state=state;
}

string Soldier::get_state(){
    return(this->state);
}
/*********************************************************************************************************/

void Offensive::useAbility(){
    this->ability = "knight";
    std::cout << "i am a Knight\nI can flank an enemy\n";
}
/*********************************************************************************************************/

void Defensive::useAbility(){
    this->ability = "Archer";
    std::cout << "i am an Archer\nI can through fire arrows and make fire in enemies\n";
}
/***********************************************************************************************************/

void Adaptable::useAbility(){
    this->ability = "sniper";
    std::cout << "i am a sniper\nI can kill targets easily on distance\n";
}
