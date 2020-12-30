#include "pch.h"
#include "RoomDetailForm.h"

using namespace System;


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
	return 0;
}