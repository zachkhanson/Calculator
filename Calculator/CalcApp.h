#pragma once
#include "wx/wx.h"
#include "MainWindow.h"

class CalcApp:public wxApp	
{
public:
	CalcApp();
	~CalcApp();
	virtual bool OnInit();
private:
	MainWindow* mainWindow = nullptr;
};

