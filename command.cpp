#include <iostream>

#include "soldier.h"
#include "vehicle.h"

using namespace std;

#include "command.h"


void attack (Soldier* arr[10])
{
    for(int i=0;i<10;i++)
    {
        arr[i]->useAbility();

    }
}

void move (vehicle* arr[10])
{
    for(int i=0;i<10;i++)
    {
        arr[i]->moving();

    }
}

void report(Soldier* arr[10], vehicle* array[10])
{
    for(int i=0;i<10;i++)
    {
        arr[i]->get_state();
        array[i]->get_state();

    }
}


