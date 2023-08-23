#include "army.h"

void Army::addSoldier(Soldier *s1){
    soldiers.push_back(s1);
}

void Army::addVehicle(Vehicle *v1){
    vehicles.push_back(v1);
}

void Army::attackCommand(){
    for (int i = 0; i < soldiers.size(); i++){
        soldiers[i]->attack();
    }
}

void Army::moveCommand(){
    for (int i = 0; i < soldiers.size(); i++){
        vehicles[i]->move();
    }
}

void Army::reportCommand(){
    cout << "Report for all soldiers in the Army\n";
    for (int i = 0; i < soldiers.size(); i++){
        soldiers[i]->report();
    }
    cout << endl;
    cout << "Report for all Vehicles in the Army\n";
    for (int i = 0; i < vehicles.size(); i++){
        vehicles[i]->deploy();
    }
}
