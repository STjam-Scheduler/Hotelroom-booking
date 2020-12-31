#include "pch.h"
#include "RoomDetailForm.h"
#include "OneBedRoom.h"
#include <vector>

using namespace System;
using namespace std;


//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Window::RoomDetailForm());


	vector<Room*> rooms;

	Room* room101 = new TwoBedRoom(101);
	rooms.push_back(room101);
	Room* room102 = new TwoBedRoom(102);
	rooms.push_back(room102);
	Room* room103 = new ThreeBedRoom(103);
	rooms.push_back(room103);
	Room* room104 = new OneBedRoom(104);
	rooms.push_back(room104);

	Room* room201 = new TwoBedRoom(201);
	rooms.push_back(room101);
	Room* room202 = new TwoBedRoom(202);
	rooms.push_back(room102);
	Room* room203 = new ThreeBedRoom(203);
	rooms.push_back(room103);
	Room* room204 = new OneBedRoom(204);
	rooms.push_back(room104);

	Room* room301 = new PresidentSuite(301);
	rooms.push_back(room301);

	return 0;

}