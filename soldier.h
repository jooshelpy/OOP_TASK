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
        virtual int get_damageV()=0;
        virtual void set_damageV(int value)=0;
        virtual void useAbility()=0;
        virtual void set_state(string state)=0;
        virtual string get_state()=0;
        void attack();
};

/* derived classes */
class Offensive:public Soldier
{
    public:
        Offensive(string name_,int damageValue_);
        int get_damageV();
        void set_damageV(int value);
        void useAbility();
        void set_state(string state);
        string get_state();
        void attack();
};

class Defensive:public Soldier
{
    public:
        Defensive(string name_,int damageValue_);
        int get_damageV();
        void set_damageV(int value);
        void useAbility();
        void set_state(string state);
        string get_state();
        void attack();

        

};

class Adaptable:public Soldier
{
    public:
        Adaptable(string name_,int damageValue_);
        int get_damageV();
        void set_damageV(int value);
        void useAbility();
        void set_state(string state);
        string get_state();
        void attack();

};

#endif