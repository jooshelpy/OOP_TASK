#ifndef _MAIN_CPP_
#define _MAIN_CPP_

#include <iostream>
#include "army.h"

int main(){
    Army army;

    // Create soldiers and vehicles
    Offensive s1("joo","sniper");
    Defensive s2("mark", "medic");

    Tank v1("hc123", "shooting", 4);
    Helicopter v2("ygt656", "transporting", 8);

    // Add soldiers and vehicles to the army
    army.addSoldier(&s1);
    army.addSoldier(&s2);

    // Issue different commands to the army
    army.attackCommand();
    army.reportCommand();
}


#endif