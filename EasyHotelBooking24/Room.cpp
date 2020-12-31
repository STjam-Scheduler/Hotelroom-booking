#include "pch.h"
#include "Room.h"


Room::Room(int rNr, int b, string f, double p) {
	roomNr = rNr;
	beds = b;
	features = f;
	price = p;
	booked = false;
}

int Room::getRoomNr() {
	return roomNr;
}

string Room::getFeatures() {
	return features;
}

double Room::getPrice() {
	return price;
}

bool Room::getBooked() {
	return booked;
}

void Room::book() {
	booked = true;
}

void Room::unbook() {
	booked = false;
}

// Vector ist in main() von CppCLR_WinformsProjekt.cpp