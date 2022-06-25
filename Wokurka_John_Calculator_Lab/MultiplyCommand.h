#pragma once
#include "IBaseCommand.h"

class MuiltplyCommand : public IBaseCommand
{
private:

	int value1;
	int value2;

public:

	MuiltplyCommand()
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

	int MultiplyFunction()
	{
		int result4 = 0;

		result4 = value1 * value2;

		return result4;
	}

	int Execute(int val1, int val2)
	{
		SetValue1(val1);
		SetValue2(val2);
		return MultiplyFunction();
	}
};