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
    this->ability = "Creative";
    std::cout << "i am a creative soldier\nI can face threats using my critical thinking\n";
}