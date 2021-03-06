#include <iostream>
using namespace std;


class TwoDPoint {
private:
    double x;
    double y;
public:
    TwoDPoint(int xLocation, int yLocation) {
        x = xLocation;
        y = yLocation;
    }
    void print() const {
        cout << x << ", " << y;
    }
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

class ThreeDPoint: public TwoDPoint {
public:
	ThreeDPoint(int xL, int yL, int zL) :TwoDPoint(xL, yL) {
		this->z = zL;
	}
	
private:
	int z;
};

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    cout << "(Only checking x, y)" << endl;
    ThreeDPoint p1(1, 2, 3);
    TwoDPoint p2 = p1;  //should copy the twoD part of p1
    p2.print();   
    cout << endl;
    ThreeDPoint p3(0, 0, 0);
    TwoDPoint p4 = p3;  //should copy the twoD part of p3
    p4.print();   
}
