#pragma once
#include "IBaseCommand.h"

class ModCommand : public IBaseCommand
{
private:

	int value1;
	int value2;

public:

	ModCommand()
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

	int ModFunction()
	{
		int result5 = 0;

		result5 = value2 % value1;
		
		return result5;
	}

	int Execute(int val1, int val2)
	{
		SetValue1(val1);
		SetValue2(val2);
		return ModFunction();
	}
};