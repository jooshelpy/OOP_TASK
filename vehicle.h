#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <iostream>
using namespace std;


class Vehicle
{
    protected:
        string type;
        string special_ability;
        int capacity;  // number of soldiers in it.
        string state = "PEACE";  /*this is in order to report*/

    public:
        Vehicle(string type, string special_ability, int capacity);
        virtual void use_ability()=0;
        virtual string get_ability()=0;
        void move();
        void set_state(string state);
        string get_state();
        void deploy();

};

class Tank: Vehicle
{
    public:
        void use_ability();
        string get_ability();
};

class Helicopter: Vehicle
{
    public:
        void use_ability();
        string get_ability();
};


#endif