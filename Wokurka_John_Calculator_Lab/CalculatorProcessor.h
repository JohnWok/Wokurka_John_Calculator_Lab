#pragma once
#include <string>
#include "cMain.h"
#include "IBaseCommand.h"
#include <vector>

class CalculatorProcessor 
{
private:
	
	static CalculatorProcessor* _processor; 
	int baseNumber;
	
	std::vector<int> values;
	CalculatorProcessor() {}
	

public:
	
	std::vector<IBaseCommand*> commands;
	

	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}

	int Excute()
	{
		int result;
		for (int i = 0; i < commands.size(); i++)
		{
			AddCommand addobject;
			//addobject = (AddCommand)commands[i];		// how to determined what command is stored in the vector? 
			/*addoject->setValue1(values.pop_back()); 
			addoject->setValue2(values.pop_back());
			int = addobject->execute();*/

			//option 2:
			commands[i]->Execute(values.pop_back(), values.pop_back());
		}

		return result;
	}

	void SetBaseNumber(int number)
	{
	
		baseNumber = number;
		
	}

	void SetValue(int _value1)
	{
		values.push_back(_value1);
	}

	void SetCommandObject(IBaseCommand* _command)
	{
		
		commands.push_back(_command);
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete; 
	void operator=(const CalculatorProcessor& other) = delete; 

	std::string GetDecimal() 
	{

		return std::to_string(baseNumber);

	}

	

	std::string GetHexadecimal()
	{
		
		std::string results = "";
		int number = baseNumber; 
		
		while (number > 0)
		{
			int mod = number % 16; 
			if (mod < 10)
			{
				results = std::to_string(mod) + results; 
			}
			else if (mod == 10)
			{
				results = 'A' + results; 
			}
			else if (mod == 11)
			{
				results = 'B' + results;
			}
			else if (mod == 12)
			{
				results = 'C' + results;
			}
			else if (mod == 13)
			{
				results = 'D' + results;
			}
			else if (mod == 14)
			{
				results = 'E' + results;
			}
			else if (mod == 15)
			{
				results = 'F' + results;
			}
			number = number / 16; 
		}
		results = "- 0x" + results; 
		
		return results; 
	}

	std::string GetBinary()
	{
		std::string results = "";
		int number = baseNumber; 
			
		for (int i = 0; i < 16; i++)
		{
			if (number % 2 == 0)
			{
				results = "0" + results;
			}
			else
			{
				results = "1" + results;
			}
			number = number / 2;
		}
		
		return results; 
	}

	
	int SubtractionFunction(int value1, int value2, std::string Operands)
	{
		int result2 = 0; 

		if (Operands == "-")
		{
			result2 = value2 - value1; 
		}
		return result2; 
	}

	int DivisionFunction(int value1, int value2, std::string Operands)
	{
		int result3 = 0; 

		if (Operands == "/")
		{
			result3 = value2 / value1; 
		}
		
		return result3; 
	}

	int MultiplyFunction(int value1, int value2, std::string Operands)
	{
		int result4 = 0; 

		if (Operands == "*")
		{
			result4 = value1 * value2; 
		}

		return result4; 
	}

	int ModFunction(int value1, int value2, std::string Operands)
	{
		int result5 = 0; 

		if (Operands == "Mod")
		{
			result5 = value2 % value1; 
		}

		return result5; 
	}
};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;