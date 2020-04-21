#include <iostream>
#include <vector>

#include "Display.h"
#include "Printer.h"
#include"Device.h"
void swap(Device* a, Device* b)
{
	Device t = *a;
	*a = *b;
	*b = t;
}
int partition(Device* b[], int low, int high)
{
	Device * pivot=b[high];
	int i = (low-1);
	for (int j = low; j <= high-1; j++)
	{
		if (b[j] <= pivot)
		{
			i++;
			swap(b[i],b[j]);
		}
	}
	swap(b[i+1], b[high]);
	return (i+1);
}
void QS(Device* b[], int low, int high) {
	if (low < high)
	{
		int pi = partition(b , low,high);
		QS(b, low, pi - 1);
		QS(b, pi + 1, high);
	}
}




int main() {
	/*const unsigned maxEquipment = 4;
	Device* equipments[maxEquipment];

equipments[0] = new Display("932-11",120, 200);	 // This instruction should result in compiler error. Why?
   equipments[1] = new Printer("182-19", 120., 8);	 // Parameters: unique ID, price, printing speed (pages per minute)
	equipments[2] = new Display("18A", 200.1, 2003); // Parameters: unique ID, price, year of appropriation
	equipments[3] = new Printer("14-932-22", 31.5, 15.4);   // Parameters: unique ID, price, printing speed
	
	for(int i=0; i<maxEquipment; i++)
	{
		if (equipments[i]) {
			equipments[i]->print(std::cout);
		std::cout << std::endl;
			delete equipments[i];
		}
	}*/
	Device* eq[5];
	eq[0] = new Device("22A", 200);
	eq[1] = new Device("345-64", 150);
	eq[2] = new Device("A11-22", 300);
	eq[3] = new Device("1-07", 400);
	eq[4] = new Device("F1-31", 500);
	QS(eq, 0, 4);
	for (int i = 0; i < 5; i++)
	{
		if (eq[i]) {
			eq[i]->print(std::cout);
			std::cout << std::endl;
			delete eq[i];
		}

	}
	return 0;
}