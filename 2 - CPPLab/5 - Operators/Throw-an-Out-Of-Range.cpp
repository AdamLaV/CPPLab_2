#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>

using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

int addNumbers(int list[], int size) {
    int numReturn = 0;
	if(size < 0)
		throw std::out_of_range ("Oooops");
	for(int i = 0; i < size; i++) {
		numReturn += list[i];
	}
	return numReturn;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{

    try {
        int vals[] = {10, 5, 2, 8};
        cout << addNumbers(vals, 4) << endl;
        cout << addNumbers(vals, 2) << endl;
        cout << addNumbers(vals, -1) << endl;
        cout << "Should never get here..." << endl;
    }
    catch(out_of_range e) {
        cout << "Oooops" << endl;
    }
}
