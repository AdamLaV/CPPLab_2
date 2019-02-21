#include <iostream>

using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

	template<typename T>
	void sortDescending(T list[], int listSize) {
		for(int i = 0; i < listSize; i++) {
			T currentMin = list[i];
			int currentMinIndex = i;
			
			for(int j = i + 1; j < listSize; j++) {
				if(currentMin > list[j]) {
					currentMin = list[j];
					currentMinIndex = j;
				}
			}
			
			if(currentMinIndex != i) {
				list[currentMinIndex] = list[i];
				list[i] = currentMin;
			}
		}
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
