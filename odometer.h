/*----------------------------------------------------------
Description: This is the header file odometer.h. This is the 
for the class Odometer. Values of this type represent an
odometer that will track fuel and mileage for an automobile.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
----------------------------------------------------------*/
class Odometer
{
public:
	void setFuelEfficiency(float newFuelEfficiency);
	//Precondition: newFuelEfficiency >= 17 && newFuelEfficiency <= 27.5
	//Postcondition: The variable fuelEfficiency is set to the value of newFuelEfficiency.
	void addMileage(float additionalMiles);
	//Precondition: newMiles >= 0
	//Postcondition: The variable newMiles has been added to variable miles.
	void resetMileage();
	//Resets the miles driven to 0.
	float getGallonsConsumed();
	//Returns the number of gallons consumed since the odometer was reset to 0.
private:
	float fuelEfficiency;//miles per gallon
	float miles;//driven
};
