#include "Vehicle.h"

Vehicle::Vehicle(std::string set_license, int set_max_passengers, int set_cargo_capacity,
	float set_fuel_capacity) {
	license_plate_ = set_license;
	max_passengers_ = set_max_passengers;
	max_cargo_ = set_cargo_capacity;

	fuel_capacity_ = set_fuel_capacity;
	available_fuel_ = fuel_capacity_;
}

std::string Vehicle::getLicense() { return license_plate_; }

int Vehicle::getMaxPassengers() { return max_passengers_; }
int Vehicle::getNumPassengers() { return num_passengers; }

int Vehicle::getCargoCapacity() { return max_cargo_; }
int Vehicle::getLoadedCargo() { return num_tons_cargo; }

float Vehicle::getFuelCapacity() { return fuel_capacity_; }
float Vehicle::getAvailableFuel() { return available_fuel_; }

float Vehicle::getSpeed() { return speed_; }

void Vehicle::loadCargo(int num_tons) {
	if (num_tons_cargo + num_tons > max_cargo_ || num_tons < 0) {
		return;
	}
	else {
		num_tons_cargo += num_tons;
	}
}

void Vehicle::unloadCargo(int num_tons) {
	if (num_tons_cargo - num_tons < 0 || num_tons < 0) {
		return;
	}
	else {
		num_tons_cargo -= num_tons;
	}
}

void Vehicle::refuel() {
	available_fuel_ = fuel_capacity_;
}