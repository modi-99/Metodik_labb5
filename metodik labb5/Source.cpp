#include "car.h"
#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include"MyPrint.h"
#include "Predicate.h"

void printCar(const Car& obj) {
	std::cout << "Car name: " << obj.name << ", " << "Car model: " << obj.model << std::endl;
}

bool FindIf(const Car& obj) {
	int value = 2010;
	if (obj.model > value)
	{
		return obj.model;
	}
}


int main() {

	
	Car carArray[5] = { {"Bmw",2017}, {"Volkswagen",2010},{"Kia", 2020}, {"Opel", 1978},{"Toyota",1999} };


	std::vector<Car> carVector(carArray, carArray + 5);

	/*
	// Punkt 1(std::for_each)

	std::for_each(carVector.begin(), carVector.end(), printCar);


	// Punkt 2(std::find_if)
	MyPrint print;

	auto b=std::find_if(carVector.begin(), carVector.end(), FindIf);
	if (b != carVector.end()) {
		print(*b);
	}
	else std::cout << "No car found" << std::endl;
	

	// Punkt 4(EQUAL)
	Equal equal_sort;
	if (std::equal(carVector.begin(), carVector.end(), carArray, equal_sort))
		std::cout << "The contents of both sequences are equal.\n";
	else
		std::cout << "The contents of both sequences differ.\n";
	*/
	

	

}

