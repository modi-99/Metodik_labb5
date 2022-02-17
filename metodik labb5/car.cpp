#include "car.h"

Car::Car(std::string name, double model) :name(name), model(model)
{
}
bool Car::operator==(const Car& obj)
{
	if (this->name.compare(obj.name))
		return true;
	else
		return false;
}
;

