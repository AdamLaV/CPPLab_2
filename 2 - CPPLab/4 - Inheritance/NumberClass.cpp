#include <iostream>
using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

class Number {
private:
    double value;
public:
	virtual double getValue() const { return value; }
};

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

class Int : public Number {
private:
    int value;
public:
    Int(int i) { value = i; }
    double getValue() const { return value; }

};

class Double : public Number {
private:
    double value;
public:
    Double(double d) { value = d; }
    double getValue() const { return value; }
};

int main()
{
    Int n1(2);
    Double n2(1.5);
    
    Number* temp = &n1;   //point at the Int
    cout << temp->getValue() << endl;

    temp = &n2;  //point at the Double
    cout << temp->getValue() << endl;
}
