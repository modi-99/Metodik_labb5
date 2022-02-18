#include "Predicate.h"

bool Equal::operator()(const Car& obj1, const Car& obj2)
{
    return (obj1.name == obj2.name) && (obj1.model == obj2.model);
}
