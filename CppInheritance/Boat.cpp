#include "Boat.h"
#include <iostream>

Boat::Boat() : Vehicle("", 48, 0, 90)
{

}

void Boat::notifyObservers(RoadEvent r) {
	std::cout << "I don't care about road events!" << std::endl;
}