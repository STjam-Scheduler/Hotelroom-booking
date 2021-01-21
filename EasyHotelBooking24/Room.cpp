#include "pch.h"
#include "Room.h"


Room::Room(string n, int rNr, int b, string f, double p, vector<string> pics) {
	name = n;
	picURI = pics;
	roomNr = rNr;
	beds = b;
	features = f;
	price = p;
	booked = false;
}

int Room::getRoomNr() {
	return roomNr;
}

int Room::getBedNumb() {
	return beds;
}

string Room::getRoomName() {
	return name;
}

void Room::setRoomName(string n) {
	name = n;
}

string Room::getFeatures() {
	return features;
}

int Room::getPrice() {
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