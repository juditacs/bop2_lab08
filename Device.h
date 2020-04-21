#pragma once
#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
#include<string>
class Device {
protected:
	std::string idNumber;
	double price;
public:
	
	Device(const Device& theOther) {
		idNumber.assign(theOther.idNumber);
		price = theOther.price;
	}
	Device(std::string id,double price):idNumber(id),price(price){}
	//virtual 
		void print(std::ostream& os)const /*= 0;*/
		{
			os << "Device id:" << idNumber << ",price:" << price;
		}

	//virtual
		~Device() {}
	bool operator<=(const Device& theOther) {
		return (this->idNumber <= theOther.idNumber);
	}
	Device& operator=(const Device& theOther) {
        this->idNumber.assign(theOther.idNumber);
        this->price = theOther.price;
		
        return *this;
    }

	};


#endif 

