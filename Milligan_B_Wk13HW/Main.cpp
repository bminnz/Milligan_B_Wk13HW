//Brendan Milligan CIS-1202
//11-21-2021 Main Source File

#include<iostream>
#include<string>
#include"Car.cpp"
#include"Truck.cpp"
#include"Vehicle.cpp"



int main() {
	//manufacturer
	string manu;
	//Year Built
	int year;
	//Number of doors
	int doors;
	//Towing capacity
	int cap;
	cout << "Vehicle: \n";
	cout << "Enter the manufacturer: ";
	getline(cin, manu);
	cout << "Enter the Year Built: ";
	cin >> year;
	cin.ignore();

	Vehicle_C v(manu, year);
	v.displayInfo();

	cout << "\nCar: \n";
	cout << "Enter the manufacturer: ";
	getline(cin, manu);
	
	cout << "Enter the Year Built: ";
	cin >> year;
	cin.ignore();
	cout << "Enter the Number of doors: ";
	cin >> doors;
	cin.ignore();

	Car_C c(manu, year, doors);
	c.displayInfo();

	cout << "\nCar\n";
	cout << "Enter the Manufacturer: ";
	getline(cin, manu);

	cout << "Enter the Year Built: ";
	cin >> year;

	cout << "Enter the Towing Capacity";
	cin >> cap;
	cin.ignore();

	Truck_C t(manu, year, cap);
	t.displayInfo();
	cout << endl;
	return 0;




}