////Brendan Milligan 11-19-2021
////CIS-1202.502 Vehicle Source File

#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include "Vehicle.h"
using namespace std;

Vehicle_C::Vehicle_C(string Amanufacturer, int AyearBuilt)
{
    manufacturer = Amanufacturer;
    yearBuilt = AyearBuilt;
}

//getters and setters
string Vehicle_C::getManufacturer()
{
    return manufacturer;
}
void Vehicle_C::setManufacturer(string Amanufacturer)
{
    manufacturer = Amanufacturer;
}

int Vehicle_C::getYearBuilt()
{
    return yearBuilt;
}
void Vehicle_C::setYearBuilt(int AyearBuilt)
{
    yearBuilt = AyearBuilt;
}

void Vehicle_C::displayInfo()
{
    cout << "\nVehicle Information:\n";
    cout << "Manufactured by: " << manufacturer << endl;
    cout << "Year Built:   " << yearBuilt << endl;
}

#endif