#include "ram.h"
#include <iostream>

ram::ram()
{
	for(int i=0;i<=RAMLENGTH;i++)	//Initialise to 0
	{
		memory[i]=0;
	}
}

int16_t ram::get(int16_t address)
{
	return memory[address];
}

void ram::set(int16_t address, int16_t value)
{
	memory[address] = value;
}