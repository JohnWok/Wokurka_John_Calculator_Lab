#pragma once
//#include "cMain.h"
#include "wx\wx.h"


 class ButtonFactory
{

	public: 
		ButtonFactory(wxWindow* parent); 
		~ButtonFactory(); 
	 wxButton* ButtonZero();
	 wxButton* ButtonOne(); 
	 wxButton* ButtonTwo();
	 wxButton* ButtonThree();
	 wxButton* ButtonFour();
	 wxButton* ButtonFive();
	 wxButton* ButtonSix();
	 wxButton* ButtonSeven();
	 wxButton* ButtonEight();
	 wxButton* ButtonNine();

	 wxButton* plus_sign();
	 wxButton* subtraction_sign();
	 wxButton* division_sign();
	 wxButton* multiplication_sign();
	 wxButton* equal_button();
	 wxButton* clear_button();

	 wxButton* mod_button();
	 wxButton* binary_button();
	 wxButton* hex_button();
	 wxButton* decimal_button();

	 wxTextCtrl* display_box();

private:
	wxWindow* _parent;


};
	

