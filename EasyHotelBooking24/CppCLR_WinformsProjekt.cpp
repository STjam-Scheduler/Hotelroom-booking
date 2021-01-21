#include "pch.h"
#include "RoomDetailForm.h"
#include "RoomsList.h"


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

	RoomsList* rList = new RoomsList();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Window::RoomDetailForm::activeRoom = rList->rooms.at(3);
	Application::Run(gcnew Window::RoomDetailForm());


	return 0;

}