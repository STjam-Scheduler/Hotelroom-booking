#include "pch.h"
#include "RoomsList.h"
#include "OneBedRoom.h"

RoomsList::RoomsList() {
	Room* room101 = new PresidentSuite(101);
	rooms.push_back(room101);

	Room* room102 = new OneBedRoom(102);
	room102->setRoomName("Tokio Experience Suite");
	rooms.push_back(room102);

	Room* room103 = new TwoBedRoom(103);
	room103->setRoomName("Valve HQ");
	rooms.push_back(room103);

	Room* room104 = new ThreeBedRoom(104);
	room104->setRoomName("IT Studentenbude");
	rooms.push_back(room104);

	Room* room201 = new TwoBedRoom(201);
	rooms.push_back(room201);

	Room* room202 = new TwoBedRoom(202);
	rooms.push_back(room202);

	Room* room203 = new ThreeBedRoom(203);
	rooms.push_back(room203);

	Room* room204 = new OneBedRoom(204);
	rooms.push_back(room204);

	Room* room301 = new PresidentSuite(301);
	rooms.push_back(room301);
}

