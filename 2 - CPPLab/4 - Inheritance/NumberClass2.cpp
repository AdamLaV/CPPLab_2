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

void doPrint(Number &num) {
	cout << num.getValue() << endl;
}

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
    
    doPrint(n1);
    doPrint(n2);
}
