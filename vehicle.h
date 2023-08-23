#ifndef _VEHICLE_H_
#define _VEHICLE_H_


class vehicle
{
    protected:
    string name;
    string special_ability;
    string state;  /*this is in order to report*/

    public:
    virtual void use_ability()=0;
    virtual void moving()=0;
    virtual void set_ability(string special_ability)=0;
    virtual void get_ability()=0;
    virtual void set_state(string state)=0;
    virtual void get_state()=0;




};

class tank:public vehicle
{
    public:
    tank(string name, string special_ability);
    void use_ability();
    void moving();

    void set_ability(string special_ability); /* this function is used if we want to change the special ability
                                                 * after first setting it with the constructor */
    void get_ability();
    void set_state(string state);
    void get_state();



};

class helicopter:public vehicle
{
    public:
    helicopter(string name, string special_ability);
    void use_ability();
    void moving();

    void set_ability(string special_ability);
    void get_ability();
    void set_state(string state);
    void get_state();
    

};


#endif