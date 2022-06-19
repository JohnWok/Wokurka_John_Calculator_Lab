#pragma once
#include "cMain.h"
#include "ButtonFactory.h"

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


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(285, 285))
{
	ButtonFactory factory(this);
	zero_button = factory.ButtonZero();
	number1 = factory.ButtonOne();
	number2 = factory.ButtonTwo();
	number3 = factory.ButtonThree(); 
	number4 = factory.ButtonFour(); 
	number5 = factory.ButtonFive();
	number6 = factory.ButtonSix(); 
	number7 = factory.ButtonSeven(); 
	number8 = factory.ButtonEight(); 
	number9 = factory.ButtonNine(); 

	plus_sign = factory.plus_sign();
	subtraction_sign = factory.subtraction_sign();
	division_sign = factory.division_sign();
	multiplication_sign = factory.multiplication_sign();
	equal_button = factory.equal_button();
	clear_button = factory.clear_button();

	mod_button = factory.mod_button();
	binary_button = factory.binary_button();
	hex_button = factory.hex_button();
	decimal_button = factory.decimal_button();

	display_box = factory.display_box(); 

};

cMain::~cMain()
{

}




void cMain::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId(); 

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
	
};