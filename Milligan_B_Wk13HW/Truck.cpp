//Brendan Milligan CIS-1202
//11-21-2021 Truck Source File
#ifndef Truck_cpp
#define Truck_C_cpp
#include<iostream>
#include"Truck.h"
#include"Car.h"
#include"Vehicle.h"
using namespace std;

Truck_C::Truck_C(string m, int y, int cap) : capacity(cap), Vehicle_C(m, y)
{
}
int Truck_C::getCapacity() {
	return capacity;
}
void Truck_C::setCapacity(int cap) {
	capacity = cap;
}
void Truck_C::displayInfo() {
	Vehicle_C::displayInfo();
	cout << "Towing capacity:  " << capacity << endl;
}
#endif
