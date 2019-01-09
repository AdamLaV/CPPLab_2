#include <iostream>
#include <cstdlib>
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

	Point(double startX, double startY) {
		x = startX;
		y = startY;
	}

	double getX() {
		return x;
	}
	
	double getY() {
		return y;
	}
	
	void translate(double deltaX, double deltaY) {
		x += deltaX;
		y += deltaY;
	}
};

int main()
{
	Point p1(rand() % 10, rand() % 10);

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

Point p2(rand() % 10, rand() % 10);
p2.translate(5,-7);


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
	cout << p2.getX() - p1.getX() << endl;
	cout << p2.getY() - p1.getY() << endl;
}
