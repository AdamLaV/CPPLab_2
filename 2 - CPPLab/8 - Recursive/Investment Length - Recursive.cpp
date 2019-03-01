#include <iostream>
#include <iomanip>
using namespace std;

int investmentLength(double money, double goal, double interestRate);

int main()
{

    cout << investmentLength(10000, 11000, 5) << endl;
    cout << investmentLength(10000, 20000, 10) << endl;
    cout << investmentLength(50, 20000, 4) << endl;
    return 0;
}

//Disable iterative looping structures...
#define for     "OhNoYouDont"
#define while   "GetThatOutOfMyKitchen"
#define goto    "AwwwHeckNo"

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

int investmentLength(double money, double goal, double interestRate) {
	if(money >= goal)
		return 0;
	else
		return(1 + investmentLength((money+ (money*interestRate)/100.0), goal, interestRate));

}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
