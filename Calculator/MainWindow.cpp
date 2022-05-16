#include "MainWindow.h"
#include <cmath>


wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
	EVT_BUTTON(10001,b1Clicked)
	EVT_BUTTON(10002, b2Clicked)
	EVT_BUTTON(10003, b3Clicked)
	EVT_BUTTON(10004, b4Clicked)
	EVT_BUTTON(10005, b5Clicked)
	EVT_BUTTON(10006, b6Clicked)
	EVT_BUTTON(10007, b7Clicked)
	EVT_BUTTON(10008, b8Clicked)
	EVT_BUTTON(10009, b9Clicked)
	EVT_BUTTON(10010, b0Clicked)
	EVT_BUTTON(10011, bDecimalClicked)
	EVT_BUTTON(10012, bEqualsClicked)
	EVT_BUTTON(10013, bClearClicked)
	EVT_BUTTON(10014, bPlusClicked)
	EVT_BUTTON(10015, bMinusClicked)
	EVT_BUTTON(10016, bMultiplyClicked)
	EVT_BUTTON(10017, bDivideClicked)
	EVT_BUTTON(10018, bModClicked)
	//EVT_BUTTON(10019, bBinClicked)
	//EVT_BUTTON(10020, bHexClicked)
wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(25, 25), wxSize(600, 550)) {
	calcDisplay = new wxTextCtrl(this,11000, "", wxPoint(10, 50), wxSize(550, 200));
	b1 = new wxButton(this, 10001, "1", wxPoint(15, 400), wxSize(150, 50));
	b2 = new wxButton(this, 10002, "2", wxPoint(165,400), wxSize(150, 50));
	b3 = new wxButton(this, 10003, "3", wxPoint(315,400), wxSize(150, 50));
	b4 = new wxButton(this, 10004, "4", wxPoint(15, 350), wxSize(150, 50));
	b5 = new wxButton(this, 10005, "5", wxPoint(165,350), wxSize(150, 50));
	b6 = new wxButton(this, 10006, "6", wxPoint(315,350), wxSize(150, 50));
	b7 = new wxButton(this, 10007, "7", wxPoint(15, 300), wxSize(150, 50));
	b8 = new wxButton(this, 10008, "8", wxPoint(165, 300), wxSize(150, 50));
	b9 = new wxButton(this, 10009, "9", wxPoint(315, 300), wxSize(150, 50));
	b0 = new wxButton(this, 10010, "0", wxPoint(165, 450), wxSize(150, 50));
	bDecimal = new wxButton(this, 10011, ".", wxPoint(15, 450), wxSize(150, 50));
	bEquals = new wxButton(this, 10012, "=", wxPoint(315, 450), wxSize(150, 50));
	bClear = new wxButton(this, 10013, "C", wxPoint(465, 300), wxSize(50, 50));
	bPlus = new wxButton(this, 10014, "+", wxPoint(465, 350), wxSize(50, 50));
	bMinus = new wxButton(this, 10015, "-", wxPoint(465, 400), wxSize(50, 50));
	bMultiply = new wxButton(this, 10016, "*", wxPoint(465, 450), wxSize(50, 50));
	bDivide = new wxButton(this, 10017, "/", wxPoint(515, 300), wxSize(50, 50));
	bMod = new wxButton(this, 10018, "%", wxPoint(515, 350), wxSize(50, 50));
	bBin = new wxButton(this, 10019, "BIN", wxPoint(515, 400), wxSize(50, 50));
	bHex = new wxButton(this, 10020, "HEX", wxPoint(515, 450), wxSize(50, 50));
}


MainWindow::~MainWindow() {
}
#pragma region NumberButtons
void MainWindow::b1Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("1");
	evt.Skip();
}

void MainWindow::b2Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("2");
	evt.Skip();
}

void MainWindow::b3Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("3");
	evt.Skip();
}

void MainWindow::b4Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("4");
	evt.Skip();
}

void MainWindow::b5Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("5");
	evt.Skip();
}

void MainWindow::b6Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("6");
	evt.Skip();
}

void MainWindow::b7Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("7");
	evt.Skip();
}

void MainWindow::b8Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("8");
	evt.Skip();
}

void MainWindow::b9Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("9");
	evt.Skip();
}

void MainWindow::b0Clicked(wxCommandEvent& evt) {
	calcDisplay->AppendText("0");
	evt.Skip();
}

void MainWindow::bDecimalClicked(wxCommandEvent& evt) {
	calcDisplay->AppendText(".");
	evt.Skip();
}
#pragma endregion

#pragma region OperatorButtons

void MainWindow::bEqualsClicked(wxCommandEvent& evt) {
	mSecondNum = calcDisplay->GetValue();
	if (!mSecondNum.ToDouble(&mSecondValue));
	calcDisplay->Clear();
	
	if (mOperator == '+') {
		mResult = mFirstValue + mSecondValue;
	}
	if(mOperator == '-') {
		mResult = mFirstValue - mSecondValue;
	}
	if (mOperator == '*') {
		mResult = mFirstValue * mSecondValue;
	}
	if (mOperator == '/') {
		mResult = mFirstValue / mSecondValue;
	}
	if (mOperator == '%') {
		mResult = lround(mFirstValue) % lround(mSecondValue);
	}

	mAnswer << mResult;
	calcDisplay->AppendText(mAnswer);
	mAnswer.Clear();
	mSecondValue = mResult;
	evt.Skip();
}

void MainWindow::bPlusClicked(wxCommandEvent& evt) {
	mAnswer.Clear();
	mFirstNum = calcDisplay->GetValue();
	if (!mFirstNum.ToDouble(&mFirstValue));
	calcDisplay->Clear();
	mOperator = '+';
	evt.Skip();
}
void MainWindow::bMinusClicked(wxCommandEvent& evt){
	mAnswer.Clear();
	mFirstNum = calcDisplay->GetValue();
	if (!mFirstNum.ToDouble(&mFirstValue));
	calcDisplay->Clear();
	mOperator = '-';
	evt.Skip();
}
void MainWindow::bMultiplyClicked(wxCommandEvent& evt){
	mAnswer.Clear();
	mFirstNum = calcDisplay->GetValue();
	if (!mFirstNum.ToDouble(&mFirstValue));
	calcDisplay->Clear();
	mOperator = '*';
	evt.Skip();
}
void MainWindow::bDivideClicked(wxCommandEvent& evt){
	mAnswer.Clear();
	mFirstNum = calcDisplay->GetValue();
	if (!mFirstNum.ToDouble(&mFirstValue));
	calcDisplay->Clear();
	mOperator = '/';
	evt.Skip();
}
void MainWindow::bModClicked(wxCommandEvent& evt){
	mAnswer.Clear();
	mFirstNum = calcDisplay->GetValue();
	if (!mFirstNum.ToDouble(&mFirstValue));
	calcDisplay->Clear();
	mOperator = '%';
	evt.Skip();
}
//void MainWindow::bBinClicked(wxCommandEvent& evt){
//	int remainder, product = 1;
//	int binary = 0;
//	calcDisplay->Clear();
//	mFirstNum = calcDisplay->GetValue();
//	if (!mFirstNum.ToDouble(&mFirstValue));
//	calcDisplay->Clear();
//	
//	while (mFirstValue != 0) {
//		remainder = lround(mFirstValue)% 2;
//		binary = binary + (remainder * product);
//		mFirstValue = mFirstValue / 2;
//		product *= 10;
//	}
//	binary = mResult;
//	mAnswer << mResult;
//	calcDisplay->AppendText(mAnswer);
//	mAnswer.Clear();
//	mSecondValue = mResult;
//	evt.Skip();
//}
//void MainWindow::bHexClicked(wxCommandEvent& evt){
//
//}
void MainWindow::bClearClicked(wxCommandEvent& evt) {
	mFirstValue, mSecondValue, mResult = 0;
	mFirstNum, mSecondNum, mAnswer = "";
	calcDisplay->Clear();
}
#pragma endregion
