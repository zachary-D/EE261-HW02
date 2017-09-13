#include <iostream> 
#include <string>

using std::string;
using std::cout;
using std::endl;

const string line1 = "I saw the big brown bear";
const string line2 = "The big brown bear saw me"; 
const string line3 = "Oh!  What a frightening experience!";

void writeSingle(int line)		//writes the line represented by 'line'
{
	switch (line)
	{
	case 1:
		cout << line1 << endl;
		break;
	case 2:
		cout << line2 << endl;
		break;
	case 3:
		cout << line3 << endl;
		break;
	}
}

void write(int first, int second, int third)	//Writes the line indicated by 'first' first, then 'second' second, and 'third' third
{
	//Write each line
	writeSingle(first);
	writeSingle(second);
	writeSingle(third);

	cout << endl;	//Add a space after the 'block'
}


int main()
{
	//Write out each group of lines
	write(1, 2, 3);
	write(1, 3, 2);
	write(2, 1, 3);
	write(2, 3, 1);
	write(3, 1, 2);
	write(3, 2, 1);

	std::cin.get();
	return 0;
}