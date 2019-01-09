#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(double theWidth, double theHeight);
    double getWidth();
    double getHeight();
    double getPerimeter();
    double getArea();
    void scale(double scaleFactor);

private:
    double width;
    double height;
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

Rectangle::Rectangle (double theWidth, double theHeight) {
	this-> width = theWidth;
	this-> height = theHeight;
}
double Rectangle::getWidth() {
	return this->width;
}
double Rectangle::getHeight() {
	return this->height;
}
double Rectangle::getPerimeter() {
	return  2 * (height+width);
}
double Rectangle::getArea() {
	return height * width;
}
void Rectangle::scale(double scaleFactor) {
	this->height *= scaleFactor;
	this->width *= scaleFactor;
}


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    //create a rectangle with a width of 10 and a height of 20
    Rectangle r1(10, 20);

    cout << r1.getWidth() << " " << r1.getHeight() << endl;
    cout << r1.getPerimeter() << endl;
    cout << r1.getArea() << endl;


    //reduce the rectangle to half its former size
    r1.scale(0.5);

    cout << r1.getWidth() << " " << r1.getHeight() << endl;
    cout << r1.getPerimeter() << endl;
    cout << r1.getArea() << endl;
}
