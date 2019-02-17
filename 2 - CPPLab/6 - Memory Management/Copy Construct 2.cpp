#include <iostream>

using namespace std;

class B {
public:
    B(int numValues, int start) {
        size = numValues;
        //allocate an array on heap
        myArray = new int[numValues];

        for(int i = 0; i < numValues; i++) {
            myArray[i] = start + i;  //fill with some numbers
        }
    }
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

	B(B &obj) {
		size = obj.size;
		myArray = new int[size];
		for (int i = 0; i < size; i++)
		{
		myArray[i] = obj.myArray[i];
		}
	}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    void print() {
        for(int i = 0; i < size; i++)
            cout << myArray[i] << " ";
        cout << endl;
    }

public: //variables public for simplicity of testing code in main - don't try this at home
    int* myArray;
    int size;
};

int main()
{
    B thing1(3, 10);    //10 11 12
    B thing2(thing1);   //thing2 copies thing1

    thing1.myArray[0] = 1;

    thing1.print();     //1 11 12
    thing2.print();     //should still be 10 11 12

    cout << "---" << endl;

    B thing3(5, 1);     //1 2 3 4 5
    B thing4(thing3);   //thing4 copies thing3

    thing3.myArray[0] = 10;

    thing3.print();     //10 2 3 4 5
    thing4.print();     //should still be 1 2 3 4 5
}
