#include <iostream> 
#include <string>

using std::string;
using std::cout;
using std::endl;

const int xLim = 8;		//The limit on the width of the board
const int yLim = 8;		//The limit on the height of the board

void drawCharacter(int x, int y)
{
	if ((x + y) % 2 == 1) cout << "*";
	else cout << " ";
}

int main()
{
	for (int x = 0; x < xLim; x++)
	{
		for (int y = 0; y < yLim; y++)
		{
			drawCharacter(x, y);
		}
		cout << endl;
	}

	std::cin.get();
	return 0;
}