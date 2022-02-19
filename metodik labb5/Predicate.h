#pragma once
#include"car.h"
class FindIf
{
private:
	double value;
public:
	FindIf(double value);
	bool operator()(const Car& obj);
};
struct Adjacent
{
	bool operator()(const Car& obj, const Car& obj2);
};
struct Equal
{
	bool operator()(const Car& obj1, const Car& obj2);
};
struct Search
{
	bool operator()(const Car& obj, const Car& obj2);
};
class MyBinOp
{
public:
	double operator()(const double& lhs, const Car& rhs);
};
class MyUnOp
{
public:
	double operator()(const Car& obj);
	Car operator()(const Car& lhs, const double& rhs);
};
class Subtract
{
private:
	double mean;
public:
	Subtract(double _mean);
	double operator()(double& carModel);
};

struct Sort
{
	bool operator()(const double& lhs, const double& rhs);
};

