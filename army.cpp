#include "army.h"

void Army::addSoldier(Soldier *s1){
    soldiers.push_back(s1);
}

void Army::addVehicle(Vehicle *v1){
    vehicles.push_back(v1);
}

void Army::issueCommand(string command){
    if (command == "attack"){
        for (int i = 0; i < soldiers.size(); i++){
            soldiers[i]->attack();
        }
    }
    else if (command == "move"){
        for (int i = 0; i < soldiers.size(); i++){
            vehicles[i]->move();
        }
    }
    else if (command == "report"){
        cout << "Report for all soldiers in the Army\n";
        for (int i = 0; i < soldiers.size(); i++){
            soldiers[i]->report();
        }
        cout << endl;
        for (int i = 0; i < vehicles.size(); i++){
            vehicles[i]->report();
        }
    }
}