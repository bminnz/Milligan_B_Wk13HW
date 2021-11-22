//Brendan Milligan 11-19-2021
//CIS-1202.502 Car Source File

//Car.cpp

#ifndef CAR_CPP
#define CAR_CPP
#include "Car.h"
#include "Vehicle.h"

#include <iostream>

using namespace std;

Car_C::Car_C(string manufacturer, int yearBuilt, int n) : numDoors(n), Vehicle_C(manufacturer, yearBuilt)
{
};
//getters and setters
int Car_C::getNumDoors()
{
    return numDoors;
}
void Car_C::setNumDoors(int AnumDoors)
{
    numDoors = AnumDoors;
}
void Car_C::displayInfo()
{
    cout << "\nVehicle Information:\n";
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Year Built:   " << getYearBuilt() << endl;
    cout << "Doors:   " << getNumDoors()<< endl;
}

#endif
