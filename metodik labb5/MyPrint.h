#pragma once
#include"car.h"
#include <iostream>
class MyPrint
{
public:
	void const operator ()(const Car& obj) 
	{
		std::cout << "Car name: " << obj.name << ", " << "Car model: " << obj.model << std::endl;
	}

};

