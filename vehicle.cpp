#include "vehicle.h"

#include <iostream>
using namespace std;


tank::tank(string name, string special_ability)
{
    this->name=name;
    this->special_ability=special_ability;
}

void tank::use_ability()
{
    cout<<"I am shooting\n";
    cout<<"booooom\n";
    tank::set_state("WAR");
}
void tank::moving()
{
    cout<<"I am moooooving";
    tank::set_state("PEACE");

}

void tank::set_ability(string special_ability)
{
   this->special_ability=special_ability;

}
void tank::get_ability()
{
   cout<<special_ability;

}
void tank::set_state(string state)
{
    this->state=state;
 
}
void tank::get_state()
{
     cout<<state;
}

/****************************************************************************************************************/

helicopter::helicopter(string name, string special_ability)
{
    this->name=name;
    this->special_ability=special_ability;
}

void helicopter::use_ability()
{
    cout<<"I am shooting\n";
    cout<<"booooom\n";
    helicopter::set_state("WAR");


}
void helicopter::moving()
{
    cout<<"I am moooooving";
    helicopter::set_state("PEACE");

}

void helicopter::set_ability(string special_ability)
{
   this->special_ability=special_ability;

}
void helicopter::get_ability()
{
   cout<<special_ability;

}
void helicopter::set_state(string state)
{
    this->state=state;
 
}
void helicopter::get_state()
{
     cout<<state;
}