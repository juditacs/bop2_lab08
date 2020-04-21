#pragma once
#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include<string>
#include "Device.h"


class Display:public Device {
protected:
	int year;
public:
	Display(std::string id, double price,int year) :Device(id, price),year(year) {}
	void print(std::ostream& os)const {
		os << "Device id:" << idNumber << ",price:" << price<<", year:"<<year;
	}
	~Display() { std::cout << "DIsplay destructor" << std::endl; }
};

#endif
