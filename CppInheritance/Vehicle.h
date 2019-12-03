#pragma once
#include <string>
#include "RoadEvent.h"

// Example inspired by https://www.geeksforgeeks.org/inheritance-in-c/

class Vehicle
{
protected:
	std::string license_plate_;

	int max_passengers_, num_passengers_ = 0;
	int max_cargo_, num_tons_cargo = 0;

	float fuel_capacity_, available_fuel_;
	int speed_ = 0;

	bool can_move;

public:
	Vehicle(std::string set_license, int set_max_passengers, int set_cargo_capacity,
	float set_fuel_capacity); 
	// In this example we'll assume each vehicle starts with a full tank of gas and a speed of 0

	// Getters
	std::string getLicense();

	int getMaxPassengers();
	int getNumPassengers();

	int getCargoCapacity();
	int getLoadedCargo();

	float getFuelCapacity();
	float getAvailableFuel();

	float getSpeed();

	bool canMove();

	void accelerate();
	void decelerate();
	void move();

	void loadCargo(int num_tons);
	void unloadCargo(int num_tons);

	void refuel();

	// This is called when two vehicles collide. Virtual functions must be overloaded by the child class.
	virtual void collide(Vehicle *other) {}

	// Gets called whenever a RoadEvent happens. This is the observer pattern.
	virtual void notifyObservers(RoadEvent r) {}

};
