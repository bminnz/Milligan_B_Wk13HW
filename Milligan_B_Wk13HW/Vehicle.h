#pragma once
//Brendan Milligan
//11-19-2021 Programming Assignment #14

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include<string>

using namespace std;
class Vehicle_C
{
private:
    string manufacturer;
    int yearBuilt;

public:
    //constructor
    Vehicle_C(string manufacturer, int yearBuilt);

    //getters and setters
    string getManufacturer();
    void setManufacturer(string manufacturer);
    int getYearBuilt();
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo();
};

#endif

