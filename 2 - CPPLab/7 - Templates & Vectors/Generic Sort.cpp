#include <iostream>

using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    template<typename T>
	int countInList(T list[], int listSize, T value) {
		int valueOccurrence = 0;
		for(int i = 0; i < listSize; i++) {
			if(list[i] == value)
				valueOccurrence++;
		}
		return valueOccurrence;
	}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this


int main()
{
    int nums[] = {4, 1, 7, 5, 8, 6, 2};
    char letters[] = {'S', 'R', 'C', 'B'};

    sortDescending(nums, 7);
    sortDescending(letters, 4);

    for(int i = 0; i < 7; i++)
        cout << nums[i] << " ";
    cout << endl;


    for(int i = 0; i < 4; i++)
        cout << letters[i] << " ";
    cout << endl;

    return 0;
}
