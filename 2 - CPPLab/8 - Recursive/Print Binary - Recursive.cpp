#include <iostream>
#include <iomanip>
using namespace std;


void printBinary(int n);

int main()
{
    printBinary(6);
    cout << endl;
    printBinary(32);
    cout << endl;
    printBinary(1020);
    cout << endl;
    return 0;
}

//Disable iterative looping structures...
#define for     "OhNoYouDont"
#define while   "GetThatOutOfMyKitchen"
#define goto    "AwwwHeckNo"


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    
void printBinary(int n) {
    if(n==0){
        return;
	}
    else {
        printBinary(n/2);
    cout << n % 2;
    }
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
