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

}
void tank::set_ability(string special_ability)
{
   this->special_ability=special_ability;

}
void tank::get_ability()
{
   cout<<special_ability;

}

/****************************************************************************************************************/

helicopter::helicopter(string name, string special_ability)
{
    this->name=name;
    this->special_ability=special_ability;
}

void helicopter::use_ability()
{
    cout<<"I am transporting\n";
    

}
void helicopter::set_ability(string special_ability)
{
   this->special_ability=special_ability;

}
void helicopter::get_ability()
{
   cout<<special_ability;

}
