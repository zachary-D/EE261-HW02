#include <iostream> 
#include <string>
#include <iomanip> //For setw()
#include <sstream>

using std::string;
using std::cout;
using std::endl;

//"Shortcuts" for class names
const string DIFFEQ = "Elementary Differential Equations";
const string PROGRM = "Intro to Programming and Software Design";
const string ESCI = "Electrical Science";
const string PSYCH = "Introduction to Psychology";
const string MATSCI = "Materials Science and Engineering 1";

void write(string day, float time, string _class)	//A "Shortcut function" to make printing each class to the screen a bit simpler on the programming end 
//'day' is the day the class is on, 'time' is the time, and '_class' is the name
//'day' accepts full names of days, or m, tu, w, th, and f as shortcuts for the weekdays (in respective order)
//The am/pm for 'time' is added automatically, with any time before 6 automatically being selected as 'pm', and any time after as 'am'.  Classes not right on the hour are entered as decimals (i.e. 12:30 = 12.5)
{
	string AmPm;		//stores if the time is AM or PM
	string time_str;	//The time stored as a string

	//Convert 'day' from shorthand to the full weekday, if applicable (i.e. "m"->"Monday")
	if (day == "m") day = "Monday";
	else if (day == "tu") day = "Tuesday";
	else if (day == "w") day = "Wednesday"; 
	else if (day == "th") day = "Thursday";
	else if (day == "f") day = "Friday"; 

	//Handle time.  See the comments at the top of the function.
	if (time > 6) AmPm = "AM";
	else AmPm = "PM";
	
	float hour;				//The hour the class starts in
	float minutes_decimal;	//The minutes after the hour the class starts in (in decimal form)
	float minutes;			//The minutes after hte hour the calss starts in (in minute form)
	
	minutes_decimal = (std::modf(time, &hour));	//Breaks time into hours and minutes (in decimal form)
	minutes = minutes_decimal * 60;				//Converts minutes(decimal form) to minutes

	//Used to convert the hours and minutes to text
	std::stringstream hour_conv;
	std::stringstream minutes_conv;
	
	//Stores the hours and minutes once converted to text
	string hour_str;
	string minutes_str;

	//Convert the hour and minute to text
	hour_conv << hour;
	hour_conv >> hour_str;

	minutes_conv << minutes;
	minutes_conv >> minutes_str;

	if (minutes != 0)	//If the class does not start right on the hour
	{
		time_str = hour_str + ":" + minutes_str + AmPm;
	}
	else time_str = hour_str + AmPm;
	
	//Write the day, time, and class name to the console, with formatting
	cout << std::setw(10) << day << std::setw(8) << time_str << " | " << _class << endl; 
}

int main()
{
	//Monday's classes
	write("m", 9, DIFFEQ);
	write("m", 10, PROGRM);

	cout << endl;

	//Tuesday's classes
	write("tu", 9.5, ESCI);
	write("tu", 1, PSYCH);
	write("tu", 2.5, MATSCI);

	cout << endl;

	//Wednesday's classes
	write("w", 9, DIFFEQ);
	write("w", 10, PROGRM);

	cout << endl;

	//Thursday's classes
	write("th", 9.5, ESCI);
	write("th", 1, PSYCH);
	write("th", 2.5, MATSCI);
	write("th", 4, DIFFEQ + " Discussion");
	
	cout << endl;

	//Friday's classes
	write("f", 9, DIFFEQ);
	write("f", 12, PROGRM + " Lab");


	std::cin.get();
	return 0;
}