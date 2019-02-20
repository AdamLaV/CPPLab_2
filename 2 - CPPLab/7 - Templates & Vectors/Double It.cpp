#include <iostream>

using namespace std;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    template<typename T>
	T doubleIt(T value) {
		return value + value;
	}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    cout << doubleIt(3.5) << endl;

    //have to force type so "hello" not treated as char[]
    cout << doubleIt<string>("hello") << endl;

    return 0;
}
