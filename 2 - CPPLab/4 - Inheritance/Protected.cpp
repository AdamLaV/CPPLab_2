#include <iostream>
#include <iomanip>

using namespace std;


class Silly {
protected:
    int x;
private:
    string s;
public:
    Silly(string sValue) { s = sValue; }

    void printData() {
        cout << x << " " << s << " ";
    }
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

class VerySilly: public Silly {
private:
	double value;
	
public:
	VerySilly(int xx, string ss, double myValue) :Silly(ss) {
		VerySilly::x = xx;
		value = myValue;
	}
	
	void printDouble() {
		cout << value;
	}
};

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    cout << fixed << setprecision(1);

    VerySilly v1(4, "five", 6.0);

    v1.printData();
    v1.printDouble();
}
