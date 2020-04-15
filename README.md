# Task1

Write a program for registering and storing computer devices. There are two types of devices: printers and displays.

**Displays** have an identification number (`std::string`), a price (`double`) and a year of appropriation (`int`).

**Printers** have an identification number (`std::string`), a price (`double`) and a printing speed (`double`).

Both devices are a type of device (IS_A relationship), so use a base class named `Device`. Common attributes should be in the base class.

The main function creates a heterogeneous container (array) for some number of devices, and then prints the devices' attributes. Add a `print` function to the base class as well as the subclasses. Does the base `print` function need to be virtual?

## Decomposition of the program

1. `Device.h`, `Printer.h`, `Display.h`: class declaration headers
2. `DeviceMain.cpp`: main program

# Task2

Add a `sortDevices` function to `DeviceMain.cpp`. This function should sort the devices array by the `idNumber` of the devices. Its signature should be:

    void sortDevices(Devices* equipments[], int size)

You can use last week's sorting algorithm but with different types. A sorting algorithm requires a way to compare two elements of the sequence it is sorting. For this, it uses one of the comparison operators (`<`, `>`, `<=` or `>=`). You need to overload this operator in the `Device` class. Make sure that you are not comparing pointers.

Add at least 5 new device to the array and sort it before printing each element. Make sure that they are printed in alphabetical order.
