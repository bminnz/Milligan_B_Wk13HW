
//Brendan Milligan 11-19-2021
//CIS-1202 Car Header File 
//Car.h
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Car_C : public Vehicle_C
{
private:
    int numDoors;

public:
    Car_C(string manufacturer, int yearBuilt, int numDoors);
    //getters and setters
    int getNumDoors();
    void setNumDoors(int numDoors);
    void displayInfo();
};

#endif