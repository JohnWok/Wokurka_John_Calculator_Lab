#pragma once
#include <string>
#include "cMain.h"

class CalculatorProcessor
{
private:
	
	static CalculatorProcessor* _processor; 
	int baseNumber;
	CalculatorProcessor() {}

public:


	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}
	int SetBaseNumber(int number)
	{
	
		return baseNumber = number;
		
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

	
	


	int AddictionFunction(int value1, int value2, std::string Operands)
	{
		int result = 0;

		if (Operands == "+")
		{

			result = value1 + value2;

		}
		return result;


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