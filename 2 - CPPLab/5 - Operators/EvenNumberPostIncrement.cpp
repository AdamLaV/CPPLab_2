#include <iostream>
using namespace std;


class EvenNumber {
public:
    explicit EvenNumber(int n) {
        value = (n % 2 == 0) ? n : n - 1; //must be even
    }

    EvenNumber operator++(int dummy);

    int getValue() const {
        return value;
    }
private:
    int value;
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

EvenNumber EvenNumber::operator++(int dummy) {
    int num = value;
    value += 2;
    return EvenNumber(num);
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    EvenNumber n1(6);

    //print its curent value, then increment
    cout << (n1++).getValue() << endl;
    cout << n1.getValue() << endl;

    return 0;
}
