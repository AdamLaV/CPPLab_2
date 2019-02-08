#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
#include <string>

using namespace std;


int main()
{

    string word = "hello";
    int index;
    cin >> index;
	
	// not the best approach -- I am cheating 
	try {
		if(index < 5)
		cout << word.at(index);
		else 
			cout << "Oooops";
	}
	catch(std::out_of_range) {
		cout << "Oooops";
	}

}
