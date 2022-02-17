#pragma once
#include"car.h"
#include <iostream>
class MyPrint
{

	bool operator ()(const Car& obj) 
	{
		std::cout << "Car name: " << obj.name << ", " << "Car model: " << obj.model << std::endl;
	}

};

