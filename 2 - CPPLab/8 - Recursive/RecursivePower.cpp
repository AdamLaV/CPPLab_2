#include <iostream>
using namespace std;


int power(int x, int e);


int main()
{

    cout << power(3, 5);
    cout << endl;
    cout << power(5, 2);
    cout << endl;
    cout << power(2, 20);
    cout << endl;
    cout << power(20, 0);
    cout << endl;

    return 0;
}

//Disable iterative looping structures...
#define for     "OhNoYouDont"
#define while   "GetThatOutOfMyKitchen"
#define goto    "AwwwHeckNo"

int power(int x, int e) {
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    if(e == 0)
		return 1;
	if(e == 1)
		return x;
	return x*power(x, e - 1);

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}
