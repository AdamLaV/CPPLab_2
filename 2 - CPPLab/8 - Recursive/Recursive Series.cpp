#include <iostream>
#include <iomanip>
using namespace std;


double Series(int steps);

int main()
{

    cout << Series(1);
    cout << endl;
    cout << Series(2);
    cout << endl;
    cout << Series(3);
    cout << endl;
    cout << Series(1000);
    cout << endl;

    return 0;
}

//Disable iterative looping structures...
#define for     "OhNoYouDont"
#define while   "GetThatOutOfMyKitchen"
#define goto    "AwwwHeckNo"

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

double SeriesHelper(int stepsLeft, double denominator) {
	double s = 1/denominator;
	if(stepsLeft > 1)
	s += SeriesHelper(stepsLeft - 1, denominator * 2);
	return s;
}

double Series(int steps) {
	return SeriesHelper(steps, 1);
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this 
