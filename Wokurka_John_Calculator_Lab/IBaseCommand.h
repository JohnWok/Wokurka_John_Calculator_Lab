#pragma once


class IBaseCommand
{

public: 
	virtual int Execute(int val1, int val2) = 0; 
	
};