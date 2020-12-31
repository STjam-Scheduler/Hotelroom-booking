#pragma once
#include <string>

using namespace std;

class Room
{
protected:
	int roomNr;
	int beds;
	string features;
	double price;
	bool booked;

public:
	Room(int, int, string, double);
	int getRoomNr();
	string getFeatures();
	double getPrice();
	bool getBooked();
	void book();
	void unbook();
};

// Vector ist in main() von CppCLR_WinformsProjekt.cpp