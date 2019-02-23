#include <iostream>

using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

template < typename T >
int countInList(T list[], int listSize, T value) {
    int valueOccurrence = 0;
    for (int i = 0; i < listSize; i++) {
      if (list[i] == value)
        valueOccurrence++;
    }
    return valueOccurrence;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    int nums[] = {4, 1, 2, 5, 2, 6, 2};
    char letters[] = {'A', 'B', 'A', 'B'};
    string words[] = {"apple", "banana", "apple"};

    cout << countInList(nums, 7, 2) << endl;
    cout << countInList(letters, 4, 'A') << endl;
    cout << countInList<string>(words, 3, "banana") << endl;

    return 0;
}
