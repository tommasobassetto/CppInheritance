#pragma once
#include "Vehicle.h"

class Boat : public Vehicle
{
public:
	Boat();
	void collide(Vehicle* other) {}
	void notifyObservers(RoadEvent r);
};

