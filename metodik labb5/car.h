#pragma once
#include <string>

#include <ostream>
class Car
{
public:
	std::string name;
	double model;


	Car();
	Car(std::string name, double model);

	 bool operator==(const Car& obj);

	
};

