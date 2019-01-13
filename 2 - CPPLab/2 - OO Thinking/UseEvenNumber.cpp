#include <iostream>

using namespace std;


class EvenNumber {
private:
    int value;
public:
    EvenNumber(int startValue) {
        //use our function to do the work...
        setValue(startValue);
    }

    int getValue() const { return value; }

    void setValue(int newValue) {
        //if given odd number, increase by 1
        if(newValue % 2 == 0)
            value = newValue;
        else
            value = newValue + 1;
    }

    void increment() { value += 2; }

    void decrement() { value -= 2; }

};

class OddNumber {
private:
    int value;
public:
    OddNumber() {
        value = 1;
    }

    int getValue() { return value; }

    void makePreviousTo(const EvenNumber& otherNumber) {

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    value = otherNumber.getValue() - 1;

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    }

};

int main()
{
    EvenNumber e1(12);
    OddNumber odd1;
    odd1.makePreviousTo(e1);
    cout << odd1.getValue() <<endl;

    e1.setValue(6);
    odd1.makePreviousTo(e1);
    cout << odd1.getValue() <<endl;

    return 0;
}
