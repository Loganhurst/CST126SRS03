// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "elephant.h"
#include "preserve.h"

int main()
{
	// static Preserve preserve; // TODO: Dynamic preserve. 

	Elephant elephant(3'500, Direction::kNorth);
	GPS gps;
	elephant.tag(gps);//check for nullprtr;
	elephant.findHerd();
	const auto time{ elephant.getElapsedTime() };
	std::cout << "Herd found in = " << time << std::endl;

	return 0;
}
