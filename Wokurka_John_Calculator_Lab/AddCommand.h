#pragma once
#include "IBaseCommand.h"

class AddCommand : public IBaseCommand
{
private:

	int value1; 
	int value2; 

public: 

	AddCommand()
	{
		value1 = 0; 
		value2 = 0; 
	}

	void SetValue1(int _value1) 
	{
		value1 = _value1; 
	}

	void SetValue2(int _value2)
	{
		value2 = _value2; 
	}

	int AddictionFunction()
	{
		int result = 0;

		result = value1 + value2;

		return result;

	}

	void Execute()
	{
		AddictionFunction();
	}


};