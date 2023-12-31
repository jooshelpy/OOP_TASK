#ifndef _ARMY_H_
#define _ARMY_H_

#include <iostream>
#include <vector>
#include "soldier.h"
#include "vehicle.h"

class Army
{
    private:
        std::vector<Soldier*> soldiers;  // vector to store the soldiers in 
        std::vector<Vehicle*> vehicles;  // vector to store the vehicles in  
    public: 
        void addSoldier(Soldier *s1);
        void addVehicle(Vehicle *v1);
        void attackCommand();
        void moveCommand();
        void reportCommand();
};



#endif