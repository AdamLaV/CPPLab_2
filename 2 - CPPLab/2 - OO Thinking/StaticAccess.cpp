#include <iostream>

using namespace std;

class Point
{
public:
    static double getOriginXValue() {
        return ORIGIN_X;
    }
    static double getOriginYValue() {
        return ORIGIN_Y;
    }

private:
    Point() {}    //private so you can't use it
    double x;
    double y;

    static const double ORIGIN_X;
    static const double ORIGIN_Y;
};


const double Point::ORIGIN_X = 0;
const double Point::ORIGIN_Y = 0;


int main()
{


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

cout << Point::getOriginXValue() << " " << Point::getOriginXValue();

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    return 0;
}
