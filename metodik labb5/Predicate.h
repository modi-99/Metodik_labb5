#pragma once
#include"car.h"
class Predicate
{
	
};

struct Equal
{
	bool operator()(const Car& obj1, const Car& obj2);
};

