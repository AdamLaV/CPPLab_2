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


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    void removeAll(vector<char>& v, char c) {
		for (unsigned int i = 0; i < v.size(); i++)  {
			if(v.at(i) == c) {
				v.erase(v.begin() + i);
				i--;
			}			
		}
	}


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main() {
    vector<char> letters = {'A', 'B', 'C', 'A', 'B', 'B', 'A'};

    auto lettersCopy = letters;
    removeAll(lettersCopy, 'C');
    print(lettersCopy);

    lettersCopy = letters;
    removeAll(lettersCopy, 'B');
    print(lettersCopy);

    lettersCopy = letters;
    removeAll(lettersCopy, 'A');
    print(lettersCopy);
}
