#include <iostream>
using namespace std;

class EvenNumber {
public:
    explicit EvenNumber(int n) {
        value = (n % 2 == 0) ? n : n - 1; //must be even
    }

    EvenNumber& operator*=(const EvenNumber& other);

    int getValue() const {
        return value;
    }
private:
    int value;
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

EvenNumber& EvenNumber::operator*=(const EvenNumber& other){
	value *= other.value;
	return *this;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    EvenNumber n1(6);
    EvenNumber n2(2);
    EvenNumber n3 = n1 *= n2;   //should do n1 *= n2, then copy result to n3

    cout << n1.getValue() << endl;
    cout << n2.getValue() << endl;
    cout << n3.getValue() << endl;

    return 0;
}
