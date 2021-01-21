#include "pch.h"
#include "OneBedRoom.h"

OneBedRoom::OneBedRoom(int rNr) : Room(rNr, 1, "FlatscreenTV, Bar, ...", 120.00) {
}

TwoBedRoom::TwoBedRoom(int rNr) : Room(rNr, 2, "FlatscreenTV, Bar, Doublebed, ...", 200.00) {
}

ThreeBedRoom::ThreeBedRoom(int rNr) : Room(rNr, 3, "FlatscreenTv, Bar, Doublebed, SleepingCouch, ...", 300.00) {
}

PresidentSuite::PresidentSuite(int rNr) : Room(rNr, 2, "4k-Screen, Bar, Kingsizebed, Whirlpool, Butler, ...", 1500.00) {
}

// Vector ist in main() von CppCLR_WinformsProjekt.cpp