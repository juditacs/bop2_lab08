#include <iostream>

#include "Display.h"
#include "Printer.h"

int main()
{
	const unsigned maxEquipment = 4;
	Device* equipments[maxEquipment];

	equipments[0] = new Equipment("932-11", 200);	 // This instruction should result in compiler error. Why?
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
	}
	return 0;
}