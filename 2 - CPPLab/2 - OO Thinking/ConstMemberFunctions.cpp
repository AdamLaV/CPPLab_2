#include <iostream>

using namespace std;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

class EvenNumber {
private:
    int value;
public:
    EvenNumber(int startValue) {
        //use our function to do the work...
        setValue(startValue);
    }

     int getValue() const{  // 😤
        return value; 
    }

    void setValue(int newValue) {
        //if given odd number, increase by 1
        if(value % 2 == 0)
            value = newValue;
        else
            value = newValue + 1;
    }

    void increment() { value += 2; }

    void decrement() { value -= 2; }

};

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
void printNumber(const EvenNumber& n) {
    cout << n.getValue() << endl;
}

int main()
{
    EvenNumber e1(4);
    e1.increment();
    printNumber(e1);

    return 0;
}
