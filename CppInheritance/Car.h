#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	Car(std::string license, int num_passengers);
	void collide(Vehicle *other);
};

