#include "cMain.h"
#include "CalculatorProcessor.h"
#include "IBaseCommand.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(100, cMain::OnButtonClick)
EVT_BUTTON(101, cMain::OnButtonClick)
EVT_BUTTON(102, cMain::OnButtonClick)
EVT_BUTTON(103, cMain::OnButtonClick)
EVT_BUTTON(104, cMain::OnButtonClick)
EVT_BUTTON(105, cMain::OnButtonClick)
EVT_BUTTON(106, cMain::OnButtonClick)
EVT_BUTTON(107, cMain::OnButtonClick)
EVT_BUTTON(108, cMain::OnButtonClick)
EVT_BUTTON(109, cMain::OnButtonClick)
EVT_BUTTON(110, cMain::OnButtonClick)
EVT_BUTTON(111, cMain::OnButtonClick)
EVT_BUTTON(112, cMain::OnButtonClick)
EVT_BUTTON(113, cMain::OnButtonClick)
EVT_BUTTON(114, cMain::OnButtonClick)
EVT_BUTTON(115, cMain::OnButtonClick)
EVT_BUTTON(116, cMain::OnButtonClick)
EVT_BUTTON(117, cMain::OnButtonClick)
EVT_BUTTON(118, cMain::OnButtonClick)
EVT_BUTTON(119, cMain::OnButtonClick)
EVT_BUTTON(120, cMain::OnButtonClick)

wxEND_EVENT_TABLE()	

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200,200), wxSize(285, 285))
{	
	zero_button = new wxButton(this, 100, "0", wxPoint(50, 198), wxSize(40, 40));
	number1 = new wxButton(this, 101, "1", wxPoint(13, 160), wxSize(40, 40));
	number2 = new wxButton(this, 102, "2", wxPoint(50, 160), wxSize(40, 40));
	number3 = new wxButton(this, 103, "3", wxPoint(90, 160), wxSize(40, 40));
	number4 = new wxButton(this, 104, "4", wxPoint(13, 120), wxSize(40, 40));
	number5 = new wxButton(this, 105, "5", wxPoint(50, 120), wxSize(40, 40));
	number6 = new wxButton(this, 106, "6", wxPoint(90, 120), wxSize(40, 40));
	number7 = new wxButton(this, 107, "7", wxPoint(13, 80), wxSize(40, 40));
	number8 = new wxButton(this, 108, "8", wxPoint(50, 80), wxSize(40, 40));
	number9 = new wxButton(this, 109, "9", wxPoint(90, 80), wxSize(40, 40));

	plus_sign = new wxButton(this, 110, "+", wxPoint(130, 160), wxSize(40, 40));
	subtraction_sign = new wxButton(this, 111, "-", wxPoint(130, 120), wxSize(40, 40));
	division_sign = new wxButton(this, 112, "/", wxPoint(170, 198), wxSize(40, 40));
	multiplication_sign = new wxButton(this, 113, "*", wxPoint(130, 80), wxSize(40, 40));
	equal_button = new wxButton(this, 114, "=", wxPoint(130, 198), wxSize(40, 40));
	clear_button = new wxButton(this, 115, "clear", wxPoint(13, 198), wxSize(40, 40));

	mod_button = new wxButton(this, 116, "Mod", wxPoint(90, 198), wxSize(40, 40));
	binary_button = new wxButton(this, 117, "Binary", wxPoint(170, 120), wxSize(60, 40));

	hex_button = new wxButton(this, 118, "Hex", wxPoint(170, 160), wxSize(60, 40));
	decimal_button = new wxButton(this, 119, "Decimal", wxPoint(170, 80), wxSize(60, 40));



	display_box = new wxTextCtrl(this,120 , "", wxPoint(10, 10), wxSize(200, 30));

	
}




void cMain::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();  
	
	AddCommand AddObject;

	switch (id)
	{
	case 100: {
		display_box->AppendText("0");
		break;
	}
	case 101: 
	{
		display_box->AppendText("1");
		break; 
	}
	case 102: 
	{
		display_box->AppendText("2");
		break; 
	}
	case 103: 
	{
		display_box->AppendText("3");
		break; 
	}
	case 104: 
	{
		display_box->AppendText("4");
		break; 
	}
	case 105: 
	{
		display_box->AppendText("5");
		break; 
	}
	case 106: 
	{
		display_box->AppendText("6");
		break; 
	}
	case 107: 
	{
		display_box->AppendText("7");
		break; 
	}
	case 108: 
	{
		display_box->AppendText("8");
		break; 
	}
	case 109: 
	{
		display_box->AppendText("9");
		break; 
	}
	case 110: 
	{
		display_box->AppendText("+");
		
		
		//AddObject.SetValue1() - we only know one number?
		break; 
	}
	case 111: 
	{
		display_box->AppendText("-");
		break; 
	}
	case 112: 
	{
		display_box->AppendText("/");
		break; 
	}
	case 113: 
	{
		display_box->AppendText("*");
		break; 
	}
	case 114: 
	{
		display_box->AppendText("=");

		

		break; 
	}
	case 115: 
	{
		display_box->Clear(); 
		break; 
	}
	case 116: 
	{
		display_box->AppendText("Mod");
		break; 
	}
	case 117: 
	{
		display_box->AppendText("Binary");
		break; 
	}
	case 118: 
	{
		
		
		display_box->AppendText("Hex");
		break; 
	}
	case 119: 
	{
		display_box->AppendText("Decimal");
		break; 
	}
	default:
		break;
	}
}