#pragma once
#ifndef PRINTER_H
#define PRINTER_H
#include <iostream>
#include<string>
#include "Device.h"

class Printer :public Device {
protected:
	double speed;
public:
	Printer(std::string id, double price, double speed) :Device(id,price), speed(speed) {}
	void print(std::ostream& os)const {
		os << "Device id:" << idNumber << ",price:" << price << ", speed:" << speed;
	}
	~Printer() { std::cout << "Printer destructor" << std::endl; }
};

#endif 