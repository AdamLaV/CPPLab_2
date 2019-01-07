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
	
	void translate(double deltaX, double deltaY) {
		x += deltaX;
		y += deltaY;
	}
};

int main()
{
	Point p1;
	Point p2;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

p1.translate(10, -3);
p2.translate(-2, 5);

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
	cout << p1.getX() << " " << p1.getY() << endl;
	cout << p2.getX() << " " << p2.getY() << endl;
}
