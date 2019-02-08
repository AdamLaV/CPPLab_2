#include <iostream>
#include <exception>
#include <cmath>

using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

double mySquareRoot(double x) {

    if(x < 0) {
		throw string("Math fail");
	}
	return sqrt(x);
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    double num;
    cin >> num;

    try {
        double result = mySquareRoot(num);
        cout << result;
    }
    catch(string e) {
        cout << e;
    }
}
