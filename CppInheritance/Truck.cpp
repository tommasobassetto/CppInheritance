#include "Truck.h"

Truck::Truck(std::string license, int set_num_passengers): Vehicle(license, 2, 200, 5000)
{

	if (num_passengers_ <= 2 && num_passengers_ >= 0) {
		num_passengers_ = set_num_passengers;
	}

}

void Truck::notifyObservers(RoadEvent r) {
	if (r.getEventType() == EventType::HAZARD) {
		decelerate();
	} else {
		move();
	}
}