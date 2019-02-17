#include <iostream>

using namespace std;

class A {
public:
    A(int num) {
        myNumber = new int(num);
    }

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    A(const A& a) {
        myNumber = new int((*a.myNumber));
    }

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    void print() {
        cout << *myNumber << endl;
    }

    void setNum(int value) {
        *myNumber = value;
    }

private:
    int* myNumber;   //Memory address of number we own
};

int main()
{
    A thing1(5);       //thing1 points to 5
    A thing2(thing1);  //thing2 copies thing1

    thing1.setNum(8);   

    thing1.print();    //8
    thing2.print();    //should still be 5 - if 8 you have a shallow copy

    cout << "---" << endl;

    A thing3(15);      //thing3 points to 15
    A thing4(thing3);  //thing4 copies thing3

    thing3.setNum(8);   

    thing3.print();    //8
    thing4.print();    //should still be 15
}
