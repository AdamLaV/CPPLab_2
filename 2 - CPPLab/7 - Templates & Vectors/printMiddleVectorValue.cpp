#include <iostream>
#include <vector>

using namespace std;


template <class T>
void print(const vector<T>& v) {
    for (auto myIt = v.begin(); myIt != v.end(); ++myIt) {
        cout << *myIt << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    int num;
    //cin >> num;
    while(num != 0) {
        //add to the vector  
		nums.push_back(num);
		cin >> num;
    }
    //print middle item
	cout << nums[(nums.size()/2)];

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}
