#include <iostream>
using namespace std;

class Point {
private:
	double x;
	double y;

public:
	Point() {
		x = 0;
		y = 0;
	}

	double getX() {
		return x;
	}
	
	double getY() {
		return y;
	}
};

int main()
{
	
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

Point p1;

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
	cout << p1.getX() << " " << p1.getY() << endl;
}
