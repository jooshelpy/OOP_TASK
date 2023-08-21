#ifndef _SOLDIER_H_
#define _SOLDIER_H_

#include <iostream>
#include <string>
using namespace std;

class Soldier
{
    protected: 
        string name;
        int damageValue;
        string ability;
    public:
        virtual int get_damageV()=0;
        virtual void set_damageV(int value)=0;
        virtual void useAbility();
};

class Offensive:Soldier
{
    public:
        Offensive(string name_,int damageValue_);
        int get_damageV();
        void set_damageV(int value);
        void useAbility();
        

};

class Defensive:Soldier
{
    public:
        Defensive(string name_,int damageValue_);
        int get_damageV();
        void set_damageV(int value);
        void useAbility();
        

};

class Adaptable:Soldier
{
    public:
        Adaptable(string name_,int damageValue_);
        int get_damageV();
        void set_damageV(int value);
        void useAbility();
};

#endif