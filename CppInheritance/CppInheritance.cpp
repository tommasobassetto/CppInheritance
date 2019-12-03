// CppInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "Truck.h"

#include "RoadEvent.h"
#include "Sign.h"
#include "StopSign.h"
#include <vector>

int main()
{
    std::cout << "Hello Woodley (and students)!\n";
	std::cout << "Today's discussion topic: Inheritance in C++ and the observer design pattern\n";


	Vehicle *red_car = new Car("Red", 4);
	Vehicle *green_car = new Car("Green", 3);
	Vehicle *blue_car = new Car("Blue", 1);
	Car black_car("Black", 2);

	Vehicle *truck = new Truck("Truck", 1);
	Vehicle *boat = new Boat();

	Vehicle black = static_cast<Vehicle> (black_car);
	Vehicle *black_car_ptr = &black;

	red_car->collide(green_car);
	std::cout << "Can the red car move? ";
	std::cout << red_car->canMove() << std::endl;

	blue_car->collide(truck);
	std::cout << "How many people are in the blue car? " << blue_car->getNumPassengers() << std::endl;

	try {
		black_car_ptr->collide(boat);
	}
	catch (std::logic_error e) {
		std::cout << "Cars and boats cannot collide! " << std::endl;
	}

	std::vector<Vehicle*> observers = { red_car, green_car, blue_car, black_car_ptr, truck, boat };
	std::vector<RoadEvent> road_events;

	StopSign stop_sign(0, 0);
	RoadEvent road_info = static_cast<RoadEvent> (stop_sign);
	road_events.push_back(road_info);

	for (Vehicle *observer : observers) {
		observer->notifyObservers(road_events.back());
	}

}