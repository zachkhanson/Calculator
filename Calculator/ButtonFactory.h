#pragma once
#include "wx/wx.h"
class ButtonFactory
{
	wxButton* newButton = nullptr;
	wxButton* CreateButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size );
};

