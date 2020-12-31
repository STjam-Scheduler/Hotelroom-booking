#pragma once
#include "Room.h"

//string featuresOne = "FlatscreenTV, Bar, ...";
//string featuresTwo = "FlatscreenTV, Bar, Doublebed, ...";
//string featuresThree = "FlatscreenTv, Bar, Doublebed, SleepingCouch, ...";
//string featuresPresident = "4k-Screen, Bar, Kingsizebed, Whirlpool, Butler, ...";
//double priceOne = 120.00;
//double priceTwo = 200.00;
//double priceThree = 300.00;
//double pricePresident = 1500.00;

class OneBedRoom : public Room {
public:
	OneBedRoom(int);
};

class TwoBedRoom : public Room {
public:
	TwoBedRoom(int);
};

class ThreeBedRoom : public Room {
public:
	ThreeBedRoom(int);
};

class PresidentSuite : public Room {
public:
	PresidentSuite(int);
};

// Vector ist in main() von CppCLR_WinformsProjekt.cpp