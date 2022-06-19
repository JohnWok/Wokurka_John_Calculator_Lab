#pragma once
#include "wx\wx.h"

class cMain : public wxFrame
{


public:

	wxButton* zero_button = nullptr;
	wxButton* number1 = nullptr; 
	wxButton* number2 = nullptr;
	wxButton* number3 = nullptr;
	wxButton* number4 = nullptr;
	wxButton* number5 = nullptr;
	wxButton* number6 = nullptr;
	wxButton* number7 = nullptr;
	wxButton* number8 = nullptr;
	wxButton* number9 = nullptr;

	wxButton* plus_sign = nullptr;
	wxButton* subtraction_sign = nullptr;
	wxButton* division_sign = nullptr;
	wxButton* multiplication_sign = nullptr;
	wxButton* equal_button = nullptr;
	wxButton* clear_button = nullptr;
	 
	wxButton* mod_button = nullptr;
	wxButton* binary_button = nullptr;
	wxButton* hex_button = nullptr;
	wxButton* decimal_button = nullptr;

	wxTextCtrl* display_box = nullptr;

	

	//wxListBox* m_list1 = nullptr; 
public: 
	cMain();
	~cMain(); 
	wxDECLARE_EVENT_TABLE(); 
	void OnButtonClick(wxCommandEvent& evt);

};

