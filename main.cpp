//Program uses a class called Odometer to create several simulated automotive
//vehicles with different fuel efficiencies and manipulate them in various ways
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "odometer.h"

using namespace std;

void input(Odometer& o);
//Postcondition: Array o is filled with size Odometer objects.

void output(Odometer& o);
//Array o is filled with size Odometer objects.
//Postcondition: Information on all the Odometer objects in array o are
//printed out.

int main()
{
	Odometer o;
    
    input(o);
    output(o);

	return 0;
}

void input(Odometer& o)
{
    //Retset odometer back to zero.
    o.resetMileage();

    cout<<"How many miles have you driven your car so far? ";
    float miles;
    cin>>miles;
    o.addMileage(miles);
    
    cout<<endl;

    cout<<"What is the fuel efficiency of your car (in mpg)? ";
    float fuelEffiency;
    cin>>fuelEffiency;
    o.setFuelEfficiency(fuelEffiency);
    cout<<endl;
}

void output(Odometer& o)
{
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);

    float gallons = o.getGallonsConsumed();
	cout<<"The gallons of gasoline consumed by your car is : "<<gallons<<endl;
}
