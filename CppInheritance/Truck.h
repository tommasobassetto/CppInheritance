#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
public:
	Truck(std::string license, int set_num_passengers);

	void collide(Vehicle other) {}
	void notifyObservers(RoadEvent r);
};

