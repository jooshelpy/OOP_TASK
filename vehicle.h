#ifndef _VEHICLE_H_
#define _VEHICLE_H_


class vehicle
{
    protected:
    string name;
    string special_ability;

    public:
    virtual void use_ability()=0;
    virtual void set_ability(string special_ability)=0;
    virtual void get_ability()=0;



};

class tank:public vehicle
{
    public:
    tank(string name, string special_ability);
    void use_ability()=0;
    void set_ability(string special_ability)=0; /* this function is used if we want to change the special ability
                                                 * after first setting it with the constructor */
    void get_ability()=0;



};

class helicopter:public vehicle
{
    public:
    helicopter(string name, string special_ability);
    void use_ability()=0;
    void set_ability(string special_ability)=0;
    void get_ability()=0;
    

};


#endif