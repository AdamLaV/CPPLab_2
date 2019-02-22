//Program to demonstrate a reverse iterator.
#include <iostream>
#include <vector>
using namespace std;


int main( )
{
    vector<string> animals {"cat", "dog", "frog", "monkey"};


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    int index;
	string newAnimal;
	cin >> index >> newAnimal;
	animals.insert(animals.begin() + index, newAnimal);
	

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    for (auto myIt = animals.begin(); myIt != animals.end(); ++myIt)
    {
        cout << *myIt << " ";
    }
    cout << endl;

}
