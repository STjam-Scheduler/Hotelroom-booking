#pragma once
#include <string>
#include <vector>

using namespace std;

class Room
{
protected:
	string name;
	int roomNr;
	int beds;
	string features;
	int price;
	bool booked;

public:
	vector<string> picURI;
	Room(string, int, int, string, double, vector<string> = {});
	int getRoomNr();
	int getBedNumb();
	string getRoomName();
	void setRoomName(string);
	string getFeatures();
	int getPrice();
	bool getBooked();
	void book();
	void unbook();
};

// Vector ist in main() von CppCLR_WinformsProjekt.cpp