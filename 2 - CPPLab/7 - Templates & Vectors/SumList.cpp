#include <iostream>
using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    template<typename T>
	T sumList(T list[], int listSize) {
		T sum {};
		for(int i = 0; i < listSize; i++) {
			sum += list[i];
		}
		return sum;
	}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    int nums[] = {4, 2, 8, 7};
    string words[] = {"hello", "there"};

    cout << sumList(nums, 4) << endl;
    cout << sumList(words, 2) << endl;

    return 0;
}
