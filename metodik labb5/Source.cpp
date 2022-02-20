#include "car.h"
#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include"MyPrint.h"
#include "Predicate.h"
#include <numeric>


int main() {

	
	Car carArray[5] = { {"Bmw",2017}, {"volkswagen",2010},{"Kia", 2020}, {"Toyota", 1978},{"Toyota",1999} };
	std::vector<Car> carVector(carArray, carArray + 5);
	
	Car carArray2[2] = { { "Kia", 2020 }, { "Toyota", 1978 } };
	std::vector<Car> carVector2(carArray2, carArray2 + 2);

	
	MyPrint print;
	Equal equal_sort;
	FindIf find_if(2010);
	Adjacent adjacent_find;
	Search search_for;
	
	/////////////////////////////// Punkt 1(std::for_each)
	
	std::for_each(carVector.begin(), carVector.end(), print);
	
	
	////////////////////////////// Punkt 2(std::find_if)
	
	
	auto b=std::find_if(carVector.begin(), carVector.end(), find_if);
	if (b != carVector.end()) {
		print(*b);
	}
	else std::cout << "No car found" << std::endl;
	
	
	
	////////////////////////////// Punkt 3(std::adjacent)
	auto c =std::adjacent_find(carVector.begin(), carVector.end(), adjacent_find);
	print(*c);
	
	////////////////////////////// Punkt 4(EQUAL)
	
	if (std::equal(carVector.begin(), carVector.end(), carArray, equal_sort))
		std::cout << "The contents of both sequences are equal.\n";
	else
		std::cout << "The contents of both sequences differ.\n";
	
	
	////////////////////////////// Punkt 5(SEARCH)
	auto a = std::search(carVector.begin(), carVector.end(), carVector2.begin(), carVector2.end(), search_for);
	if (a != carVector.end())
		std::cout << " The subsequence is present at index: " << (a - carVector.begin()) << '\n';
	else
		std::cout << "The subsequence was not found\n"; 
	
	
	
	/////////////////////////////// Punkt 6(accumulate)
	
	double sum= std::accumulate(carVector.begin(), carVector.end(), 0.0, MyBinOp());
	std::cout << sum << std::endl;
	double meanValue = sum / carVector.size();
	std::cout << meanValue << std::endl;
	
	
	/////////////////////////////// Punkt 7(transform and fill)
	std::vector<double> carVector3(carVector.size());
	std::transform(carVector.begin(), carVector.end(), carVector3.begin(), MyUnOp()); //innehåller modelår endast

	std::vector<double>::iterator ptr;
	for (ptr = carVector3.begin(); ptr < carVector3.end(); ptr++)
	{
		std::cout << *ptr<<"\n";
	}
	
	
	//////////////////////////////// Punkt 8(transform and subtracting mean from parameters)
	Subtract mean(meanValue);
	std::transform(carVector3.begin(), carVector3.end(), carVector3.begin(), mean); // samma sak utan m vectorn
	std::cout << "mean value is:" << meanValue << std::endl;
	
	std::vector<double>::iterator it2;
	for (it2 = carVector3.begin(); it2 < carVector3.end(); it2++)
	{
		std::cout <<"Your car model after subtracting mean is: " << *it2 << "\n";
	}
	
	///////////////////////////////// Punkt 9 (Sort)
	std::sort(carVector3.begin(), carVector3.end(), Sort());
	
	std::vector<double>::iterator ptr3;
	for (ptr3 = carVector3.begin(); ptr3 < carVector3.end(); ptr3++)
	{
		std::cout <<" " << *ptr3 <<": ";
	}
	
}

