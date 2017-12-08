/*--------------------------------------------------------------
This is the implementation for the class Odometer. The interface 
is in the file odometer.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "odometer.h"

using namespace std;

void Odometer::setFuelEfficiency(float newFuelEfficiency)
{
	if (newFuelEfficiency >= 17 && newFuelEfficiency <= 27.5)
		fuelEfficiency = newFuelEfficiency;
	else
	{
		cout<<"Invalid argument to mutator function: Aborting progarm.\n";
		exit(1);
	}

	//miles = 0;
}

void Odometer::addMileage(float additionalMiles)
{
	if (additionalMiles >= 0)
		miles+=additionalMiles;
	else
	{
		cout<<"Invalid argument found in mutator function: Aborting program.";
		exit(1);
	}
}

void Odometer::resetMileage()
{
	miles = 0;
}

float Odometer::getGallonsConsumed()
{
	return miles/fuelEfficiency;
}
