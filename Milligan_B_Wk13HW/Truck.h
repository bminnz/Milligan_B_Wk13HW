#pragma once
#ifndef Truck_H
//Brendan Milligan CIS-1202 
//11-21-2021 Truck Header File
#include<iostream>
#include"Vehicle.h"
#include"Car.h"
using namespace std;

class Truck_C : public Vehicle_C {
private:
	//Towing Capacity
	int capacity;



public:
	//constructor
	Truck_C(string manufacturer,int yearBuilt, int capacity);
	//setters and getters
	void setCapacity(int capacity);
	int getCapacity();
	void displayInfo();

};





#endif

