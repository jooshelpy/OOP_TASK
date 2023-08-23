#include "vehicle.h"

void Vehicle::deploy(){
    cout << "Deploying " << type << " with capacity " << capacity << " soldiers.\n";
}

void Vehicle::move()
{
    cout<< this->type << " is moving\n";
    Vehicle::set_state("PEACE");
}

void Vehicle::set_state(string state){
    this->state = state;
}

string Vehicle::get_state(){
    return(this->state);
}

/***********************************************************************************************************/

Tank::Tank(string type, string special_ability, int capacity)
{
    this->type=type;
    this->special_ability = special_ability;
    this->capacity = capacity;
}

void Tank::use_ability()
{
    cout<<"Fireeeeeeeeeeeeeeeeeeeeeeeeeeee All\n";
    cout<<"booooom\n";
    Tank::set_state("WAR");
}

string Tank::get_ability()
{
    return (this->special_ability);
}
/****************************************************************************************************************/

Helicopter::Helicopter(string type, string special_ability, int capacity)
{
    this->type=type;
    this->special_ability = special_ability;
    this->capacity = capacity;
}

void Helicopter::use_ability()
{
    cout<<"Transporting\n";
    Helicopter::set_state("PEACE");
}

string Helicopter::get_ability()
{
    return(this->special_ability);
}