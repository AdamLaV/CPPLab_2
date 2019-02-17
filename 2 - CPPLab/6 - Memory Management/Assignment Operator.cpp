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

    B& operator=(const B& other);

    void print() {
        for(int i = 0; i < size; i++)
            cout << myArray[i] << " ";
        cout << endl;
    }

public: //variables public for simplicity of test code
    int* myArray;
    int size;
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

B& B::operator=(const B& b){
    if (this != &b)   // if the object passed in it is not already this one then copy
    {  

        // delete the existing myArray
        delete [] myArray;

        size = b.size;  // copy size
        myArray = new int[b.size];  // create new array
        for (int i = 0; i < size; i++)
            myArray[i] = b.myArray[i];  // copy myArray of b to this object
    }

    return *this;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    B thing1(3, 10);    //10 11 12
    B thing2(1, 5);     //5

    thing2 = thing1;    //Use assignment operator

    thing1.myArray[0] = 1;

    thing1.print();     //1 11 12
    thing2.print();     //should still be 10 11 12

    cout << "---" << endl;

    B thing3(5, 1);     //1 2 3 4 5

    thing3 = thing3;    //Test self assignment

    thing3.print();     //should still be 1 2 3 4 5
}
