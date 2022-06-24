#pragma once
#include <string>

class IBaseCommand
{
public: 
	virtual void Execute() = 0; 
	
	virtual void ExecuteAddiction(int value1, int value2, std::string Operand) = 0; 
};