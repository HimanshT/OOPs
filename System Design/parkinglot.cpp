#include <iostream>
#include <memory>
#include <vector>

using namespace std;

// Enum to represent different vehicle types
enum class VehicleType {
	Motorcycle,
	Car,
	Bus
};

// Base class for a parking spot
class ParkingSpot {
public:
	ParkingSpot(int number) : number(number), occupied(false) {}

	bool isOccupied() const {
		return occupied;
	}

	void occupy() {
		occupied = true;
	}

	void vacate() {
		occupied = false;
	}

	virtual bool canFitVehicle(VehicleType vehicleType) const = 0;

private:
	int number;
	bool occupied;
};

// Derived classes for different types of parking spots
class MotorcycleSpot : public ParkingSpot {
public:
	MotorcycleSpot(int number) : ParkingSpot(number) {}

	bool canFitVehicle(VehicleType vehicleType) const override {
		return true;  // Motorcycle can park in any spot
	}
};

class CompactSpot : public ParkingSpot {
public:
	CompactSpot(int number) : ParkingSpot(number) {}

	bool canFitVehicle(VehicleType vehicleType) const override {
		return vehicleType == VehicleType::Car;  // Only cars can park in compact spots
	}
};

class LargeSpot : public ParkingSpot {
public:
	LargeSpot(int number) : ParkingSpot(number) {}

	bool canFitVehicle(VehicleType vehicleType) const override {
		return vehicleType == VehicleType::Car || vehicleType == VehicleType::Bus;  // Cars and buses can park in large spots
	}
};

// Class representing a row of parking spots
class ParkingRow {
public:
	ParkingRow(int rowNum, int numMotorcycleSpots, int numCompactSpots, int numLargeSpots)
		: rowNum(rowNum) {
		for (int i = 0; i < numMotorcycleSpots; ++i) {
			spots.push_back(make_unique<MotorcycleSpot>(i + 1));
		}

		for (int i = numMotorcycleSpots; i < numMotorcycleSpots + numCompactSpots; ++i) {
			spots.push_back(make_unique<CompactSpot>(i + 1));
		}

		for (int i = numMotorcycleSpots + numCompactSpots; i < numMotorcycleSpots + numCompactSpots + numLargeSpots; ++i) {
			spots.push_back(make_unique<LargeSpot>(i + 1));
		}
	}

	bool parkVehicle(VehicleType vehicleType) {
		for (const auto& spot : spots) {
			if (!spot->isOccupied() && spot->canFitVehicle(vehicleType)) {
				spot->occupy();
				return true;
			}
		}
		return false;  // No available spot for the given vehicle type
	}

	void printStatus() const {
		cout << "Row " << rowNum << ": ";
		for (const auto& spot : spots) {
			cout << (spot->isOccupied() ? "X" : "_") << " ";
		}
		cout << endl;
	}

private:
	int rowNum;
	vector<unique_ptr<ParkingSpot>> spots;
};

// Class representing the parking lot
class ParkingLot {
public:
	ParkingLot(int numLevels, int numRowsPerLevel, int numMotorcycleSpotsPerRow, int numCompactSpotsPerRow, int numLargeSpotsPerRow)
		: numLevels(numLevels) {
		for (int i = 0; i < numLevels; ++i) {
			levels.push_back(vector<ParkingRow>());
			for (int j = 0; j < numRowsPerLevel; ++j) {
				levels[i].push_back(ParkingRow(j + 1, numMotorcycleSpotsPerRow, numCompactSpotsPerRow, numLargeSpotsPerRow));
			}
		}
	}

	bool parkVehicle(VehicleType vehicleType) {
		for (auto& level : levels) {
			for (auto& row : level) {
				if (row.parkVehicle(vehicleType)) {
					return true;
				}
			}
		}
		return false;  // No available spot for the given vehicle type
	}

	void printStatus() const {
		for (const auto& level : levels) {
			for (const auto& row : level) {
				row.printStatus();
			}
		}
	}

private:
	int numLevels;
	vector<vector<ParkingRow>> levels;
};

int main() {
	// Create a parking lot with 2 levels, 3 rows per level, and 5 spots per row
	ParkingLot parkingLot(2, 3, 5, 5, 5);

	// Park vehicles in the parking lot
	parkingLot.parkVehicle(VehicleType::Motorcycle);
	parkingLot.parkVehicle(VehicleType::Car);
	parkingLot.parkVehicle(VehicleType::Bus);
	parkingLot.parkVehicle(VehicleType::Motorcycle);
	parkingLot.parkVehicle(VehicleType::Car);
	parkingLot.parkVehicle(VehicleType::Bus);

	// Print the current status of the parking lot
	parkingLot.printStatus();

	return 0;
}
