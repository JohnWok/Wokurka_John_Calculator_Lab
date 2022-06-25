#pragma once

#include "wx\wx.h"
#include <vector>

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
	wxDECLARE_EVENT_TABLE(); 
	void OnButtonClick(wxCommandEvent& evt);
	unsigned long m_value;

	
	
	
	/*int value0; 
	int value1;
	int value2; 
	int value3; 
	int value4; 
	int value5; 
	int value6; 
	int value7; 
	int value8; 
	int value9; */

	bool AddOp = false; 
	bool SubOp = false; 
	bool MultOp = false; 
	bool DivideOp = false; 
	bool ModOp = false; 
	bool BinaryBool = false; 
private:
	std::vector<int> UserValues; 


};

