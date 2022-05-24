#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size){
	newButton = new wxButton(parent,id,label,pos,size);

	return newButton;
}
