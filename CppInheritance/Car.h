#pragma once
#include "Vehicle.h"
#include "RoadEvent.h"

class Car : public Vehicle
{
public:
	Car(std::string license, int num_passengers);
	void collide(Vehicle *other);
	void notifyObservers(RoadEvent r);
};

