#include "vehicle.h"


Vehicle::Vehicle(string type)
{
    this->type=type;
}

void Vehicle::move()
{
    cout<<"mooooooooooove\n";
    Vehicle::set_state("PEACE");
}

void Vehicle::set_state(string state){
    this->state = state;
}

string Vehicle::get_state(){
    return(this->state);
}

void Vehicle::report(){
    cout << "Type: " << this->type << endl;
    cout << "Functionality: " << this->special_ability << endl;
}
/***********************************************************************************************************/

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

void Helicopter::use_ability()
{
    cout<<"Transporting\n";
    Helicopter::set_state("PEACE");
}

string Helicopter::get_ability()
{
    return(this->special_ability);
}