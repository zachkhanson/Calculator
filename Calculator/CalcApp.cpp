#include "CalcApp.h"

wxIMPLEMENT_APP(CalcApp);

CalcApp::CalcApp()
{
}

CalcApp::~CalcApp()
{
}

bool CalcApp::OnInit()
{
	mainWindow = new MainWindow();
	mainWindow->Show();
	return true;
}
