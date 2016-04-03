#include "video.h"
#include <cstdlib>
#include <iostream>
video::video()
{
	for(int i=0;i<16;i++)
	{
		lines[i]=0;
	}
}

void video::setline(int line,int16_t value)
{
	std::cout<<"SETLINE CALLED";
	lines[line]=value;
}

void video::draw()
{
	std::system("cls");
	for(int i=0;i<16;i++)
	{
		for(int j=15;j>=0;j--)
		{
			if (lines[i]&(1<<j))
			{
				std::cout<<"#";
			}
			else
			{
				std::cout<<"-";
			}
		}
		std::cout<<std::endl;
	}
}