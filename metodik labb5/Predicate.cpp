#include "Predicate.h"
#include<iostream>

bool Equal::operator()(const Car& obj1, const Car& obj2)
{
    return (obj1.name == obj2.name) && (obj1.model == obj2.model);
}

FindIf::FindIf(double value):value(value)
{
}

bool FindIf::operator()(const Car& obj)
{
    return obj.model>value;
}

bool Adjacent::operator()(const Car& obj, const Car& obj2)
{
    if (true) {
        return obj.name == obj2.name;
    } 
     
}

bool Search::operator()(const Car& obj, const Car& obj2)
{
    return (obj.name == obj2.name) && (obj.model == obj2.model);
}

double MyBinOp::operator()(const double& lhs, const Car& rhs)
{
    return lhs + rhs.model;
}
