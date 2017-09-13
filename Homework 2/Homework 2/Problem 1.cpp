#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

namespace day //Weekday constants
{
	const string d_m = "Monday";
	const string d_tu = "Thursday";
	const string d_w = "Wednesday";
	const string d_th = "Thursday";
	const string d_f = "Friday";
};



struct schoolClass		//A struct that represents one class, that may 
{
	schoolClass(string _name, string _time, string occurs);	//Creates a new class with '_name' as its name, '_time' as its time, and 'occurs' defining what days the class is on
															//m corresponds to monday, tu to tuesday, w to wednesday, th to thursday, f to friday.  Any combination can be used, with our without spaces

	string name;
	string time;

	bool isOnMonday = false;
	bool isOnTuesday = false;
	bool isOnWednesday = false;
	bool isOnThursday = false;
	bool isOnFriday = false;

	void writeClass(string day);			//Writes the class information for the day specified in 'day' to the console.  m corresponds to monday, tu to tuesday, w to wednesday, th to thursday, f to friday.
};

schoolClass::schoolClass(string _name, string _time, string occurs)
{
	name = _name; 
	time = _time;

	if (occurs.find("m")) isOnMonday = true;
	if (occurs.find("tu")) isOnTuesday = true;
	if (occurs.find("w")) isOnWednesday = true;
	if (occurs.find("th")) isOnThursday = true;
	if (occurs.find("f")) isOnFriday = true;
}

void schoolClass::writeClass(string day)
{
	//This first if-statement chain determines which day we are to display for
	if (day == "m")
	{
		if (isOnMonday)
		{

		}
	}
	else if (day == "tu")
	{

	}
	else if (day == "w")
	{

	}
	else if (day == "th")
	{

	}
	else if (day == "f")
	{
	
	}
}



int main()
{
	


	return 0;
}