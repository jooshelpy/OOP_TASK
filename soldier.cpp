#include "soldier.h"

Offensive::Offensive(string name_, int damageValue_){
    this->name = name_;
    this->damageValue = damageValue_;
}
int Offensive::get_damageV(){
    return (this->damageValue);
}
void Offensive::set_damageV(int value){
    this->damageValue = value;
}
void Offensive::useAbility(){
    this->ability = "knight";
    std::cout << "i am a Knight\nI can flank an enemy\n";
}
void Offensive::set_state(string state)
{
    this->state=state;
 
}
void Offensive::get_state()
{
     cout<<state;
}
/*********************************************************************************************************/

Defensive::Defensive(string name_, int damageValue_){
    this->name = name_;
    this->damageValue = damageValue_;
}

int Defensive::get_damageV(){
    return (this->damageValue);
}
void Defensive::set_damageV(int value){
    this->damageValue = value;
}
void Defensive::useAbility(){
    this->ability = "Archer";
    std::cout << "i am an Archer\nI can through fire arrows and make fire in enemies\n";
}
void Defensive::set_state(string state)
{
    this->state=state;
 
}
void Defensive::get_state()
{
     cout<<state;
}
/***********************************************************************************************************/

Adaptable::Adaptable(string name_, int damageValue_){
    this->name = name_;
    this->damageValue = damageValue_;
}
int Adaptable::get_damageV(){
    return (this->damageValue);
}
void Adaptable::set_damageV(int value){
    this->damageValue = value;
}
void Adaptable::useAbility(){
    this->ability = "sniper";
    std::cout << "i am a sniper\nI can kill targets easily on distance\n";
}
void Adaptable::set_state(string state)
{
    this->state=state;
 
}
void Adaptable ::get_state()
{
     cout<<state;
}