#pragma once
#include "wx/wx.h"

class MainWindow :public wxFrame
{
public:
	MainWindow();
	~MainWindow();
	void b1Clicked(wxCommandEvent& evt);
	void b2Clicked(wxCommandEvent& evt);
	void b3Clicked(wxCommandEvent& evt);
	void b4Clicked(wxCommandEvent& evt);
	void b5Clicked(wxCommandEvent& evt);
	void b6Clicked(wxCommandEvent& evt);
	void b7Clicked(wxCommandEvent& evt);
	void b8Clicked(wxCommandEvent& evt);
	void b9Clicked(wxCommandEvent& evt);
	void b0Clicked(wxCommandEvent& evt);
	void bEqualsClicked(wxCommandEvent& evt);
	void bDecimalClicked(wxCommandEvent& evt);
	void bClearClicked(wxCommandEvent& evt);
	void bPlusClicked(wxCommandEvent& evt);
	void bMinusClicked(wxCommandEvent& evt);
	void bMultiplyClicked(wxCommandEvent& evt);
	void bDivideClicked(wxCommandEvent& evt);
	void bModClicked(wxCommandEvent& evt);
	void bBinClicked(wxCommandEvent& evt);
	void bHexClicked(wxCommandEvent& evt);

	wxTextCtrl* calcDisplay = nullptr;
	wxButton* b1 = nullptr;
	wxButton* b2 = nullptr;
	wxButton* b3 = nullptr;
	wxButton* b4 = nullptr;
	wxButton* b5 = nullptr;
	wxButton* b6 = nullptr;
	wxButton* b7 = nullptr;
	wxButton* b8 = nullptr;
	wxButton* b9 = nullptr;
	wxButton* b0 = nullptr;
	wxButton* bEquals = nullptr;
	wxButton* bDecimal = nullptr;
	wxButton* bClear = nullptr;
	wxButton* bPlus = nullptr;
	wxButton* bMinus = nullptr;
	wxButton* bMultiply = nullptr;
	wxButton* bDivide = nullptr;
	wxButton* bMod = nullptr;
	wxButton* bBin = nullptr;
	wxButton* bHex = nullptr;
	

	
	wxString mFirstNum;
	double mFirstValue;
	wxString mSecondNum;
	double mSecondValue;
	char mOperator;
	wxString mAnswer;
	double mResult;

	wxDECLARE_EVENT_TABLE();
};

