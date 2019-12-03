#include "Car.h"
#include "Vehicle.h"
#include "Truck.h"
#include "Boat.h"
#include <stdexcept>
#include "StopSign.h"

Car::Car(std::string license, int num_passengers) :Vehicle(license, 4, 0, 20)
{
	license_plate_ = license;

	if (num_passengers < max_passengers_) {
		num_passengers_ = num_passengers;
	}
}

void Car::collide(Vehicle *other) {
	if (Car* other_car = dynamic_cast<Car*>(other)) { // if other is cast to car, i.e. if (other instanceof Car)
		// If two cars collide, nothing serious happens
		speed_ = 0;
		can_move = false;

		// Driver leaves the car to check damage
		num_passengers_ = num_passengers_ - 1;
		return;

	} 	if (Truck* truck = dynamic_cast<Truck*>(other)) { 
		// If a car and a truck collide, bad things happen
		speed_ = 0;
		can_move = false;

		// Thankfully, all passengers were able to leave the car safely
		num_passengers_ = 0;
		return;

	} if (Boat* boat = dynamic_cast<Boat*>(other)) {
		std::logic_error e("A boat cannot collide with a car!"); 
		throw e;
	}

	// If none of the above, then we probably collided with a fly
	// and the only effect is a slight speed decrease
	speed_ -= 1;

}

// A RoadEvent has been posted. This is how the car reacts
void Car::notifyObservers(RoadEvent r) {
	// Does nothing
}