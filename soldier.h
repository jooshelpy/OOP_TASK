#ifndef _SOLDIER_H_
#define _SOLDIER_H_

#include <iostream>
#include <string>
using namespace std;

/* abstract class */
class Soldier
{
    protected: 
        string name;
        string ability;
        int damageValue;
        string state = "PEACE";  /*this is in order to report*/


    public:
        Soldier(string name_,string ability);
        int get_damageV();
        void set_damageV(int value);
        virtual void useAbility()=0;
        void set_state(string state);
        string get_state();
        void attack();
        void defend();
        void report();
};

/* derived classes */
class Offensive:public Soldier
{
    public:
        void useAbility();
};

class Defensive:public Soldier
{
    public:
        void useAbility();
};

class Adaptable:public Soldier
{
    public:
        void useAbility();
};

#endif