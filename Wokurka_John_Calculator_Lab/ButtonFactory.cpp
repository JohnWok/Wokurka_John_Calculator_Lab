#include "ButtonFactory.h"
//#include "cMain.h"


ButtonFactory::ButtonFactory(wxWindow* parent)
{
	//Default constructor
	_parent = parent;
}

ButtonFactory::~ButtonFactory()
{
	//Default destructor
}

wxButton* ButtonFactory::ButtonZero()
{
	wxButton* zero_button;
	zero_button = new wxButton(_parent, 100, "0", wxPoint(50, 198), wxSize(40, 40));
	return zero_button; 
};

wxButton* ButtonFactory::ButtonOne()
{
	wxButton* number1;   
	number1 = new wxButton(_parent, 101, "1", wxPoint(13, 160), wxSize(40, 40));
	return number1;
};

wxButton* ButtonFactory::ButtonTwo()
{
	wxButton* number2;
	number2 = new wxButton(_parent, 102, "2", wxPoint(50, 160), wxSize(40, 40));
	return number2;
};

wxButton* ButtonFactory::ButtonThree()
{
	wxButton* number3;
	number3 = new wxButton(_parent, 103, "3", wxPoint(90, 160), wxSize(40, 40));
	return number3;
};

wxButton* ButtonFactory::ButtonFour()
{
	wxButton* number4;
	number4 = new wxButton(_parent, 104, "4", wxPoint(13, 120), wxSize(40, 40));
	return number4;
};

wxButton* ButtonFactory::ButtonFive()
{
	wxButton* number5;
	number5 = new wxButton(_parent, 105, "5", wxPoint(50, 120), wxSize(40, 40));
	return number5;
};

wxButton* ButtonFactory::ButtonSix()
{
	wxButton* number6;
	number6 = new wxButton(_parent, 106, "6", wxPoint(90, 120), wxSize(40, 40));
	return number6; 
}

wxButton* ButtonFactory::ButtonSeven()
{
	wxButton* number7;
	number7 = new wxButton(_parent, 107, "7", wxPoint(13, 80), wxSize(40, 40));
	return number7; 
}
wxButton* ButtonFactory::ButtonEight()
{
	wxButton* number8;
	number8 = new wxButton(_parent, 108, "8", wxPoint(50, 80), wxSize(40, 40));
	return number8; 

}

wxButton* ButtonFactory::ButtonNine()
{
	wxButton* number9;
	number9 = new wxButton(_parent, 109, "9", wxPoint(90, 80), wxSize(40, 40));
	return number9; 
}

wxButton* ButtonFactory::plus_sign()
{
	wxButton* plus_sign; 
	plus_sign = new wxButton(_parent, 110, "+", wxPoint(130, 160), wxSize(40, 40));
	return plus_sign; 
}

wxButton* ButtonFactory::subtraction_sign()
{
	wxButton* subtraction_sign; 
	subtraction_sign = new wxButton(_parent, 111, "-", wxPoint(130, 120), wxSize(40, 40));
	return subtraction_sign; 
}

wxButton* ButtonFactory::division_sign()
{
	wxButton* division_sign; 
	division_sign = new wxButton(_parent, 112, "/", wxPoint(170, 198), wxSize(40, 40));
	return division_sign;
}

wxButton* ButtonFactory::multiplication_sign()
{
	wxButton* multiplication_sign; 
	multiplication_sign = new wxButton(_parent, 113, "*", wxPoint(130, 80), wxSize(40, 40));
	return multiplication_sign; 

}

wxButton* ButtonFactory::equal_button()
{
	wxButton* equal_button; 
	equal_button = new wxButton(_parent, 114, "=", wxPoint(130, 198), wxSize(40, 40));
	return equal_button;
}

wxButton* ButtonFactory::clear_button()
{
	wxButton* clear_button; 
	clear_button = new wxButton(_parent, 115, "clear", wxPoint(13, 198), wxSize(40, 40));
	return clear_button; 

}

wxButton* ButtonFactory::mod_button()
{
	wxButton* mod_button; 
	mod_button = new wxButton(_parent, 116, "Mod", wxPoint(90, 198), wxSize(40, 40));
	return mod_button; 
}

wxButton* ButtonFactory::binary_button()
{
	wxButton* binary_button; 
	binary_button = new wxButton(_parent, 117, "Binary", wxPoint(170, 120), wxSize(60, 40));
	return binary_button; 

}

wxButton* ButtonFactory:: hex_button()
{
	wxButton* hex_button; 
	hex_button = new wxButton(_parent, 118, "Hex", wxPoint(170, 160), wxSize(60, 40));
	return hex_button; 
}

wxButton* ButtonFactory::decimal_button()
{
	wxButton* decimal_button; 
	decimal_button = new wxButton(_parent, 119, "Decimal", wxPoint(170, 80), wxSize(60, 40));
	return decimal_button; 
}

wxTextCtrl* ButtonFactory::display_box()
{
	wxTextCtrl* display_box = new wxTextCtrl(); 
	display_box = new wxTextCtrl(_parent, 120, "", wxPoint(10, 10), wxSize(200, 30));
	return display_box; 
}


