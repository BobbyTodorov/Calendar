#include "CalendarWindow.h"
#include "CalendarGenerator.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Calendar::CalendarWindow cw;
	Application::Run(% cw);
	return 0;
}