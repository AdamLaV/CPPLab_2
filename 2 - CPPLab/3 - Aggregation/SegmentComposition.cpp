#include <iostream>
#include <string>

using namespace std;

class Point {
private:
    int x = 0;
    int y = 0;
public:
    Point(int xVal, int yVal) { moveBy(xVal, yVal); }
    string toString() { return to_string(x) + ", " + to_string(y); }
    void moveBy(int xVal, int yVal) { x += xVal; y += yVal; }
};

class Segment {
public:
    string toString() { return p1.toString() + " to " + p2.toString(); }

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW


Segment(Point p3,Point p4)
{
   p1 = p3;
   p2 = p4;
}

private:
Point p1 = Point(0,0);
Point p2 = Point(0,0);

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
};


int main()
{
    Point A(0, 0);
    Point B(4, 4);

    Segment s1(A, B);

    cout << s1.toString() << endl;
    B.moveBy(1, 1);
    cout << s1.toString() << endl;
}
