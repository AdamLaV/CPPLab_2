#include <iostream>
using namespace std;


class EvenNumber {
public:
    explicit EvenNumber(int n) {
        value = (n % 2 == 0) ? n : n - 1; //must be even
    }

    friend ostream& operator<<(ostream& theStream, const EvenNumber& number);

    int getValue() const {
        return value;
    }
private:
    int value;
};


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

ostream& operator<<(ostream& theStream, const EvenNumber& number) {
	theStream << number.value;
	return theStream;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    EvenNumber n1(6);

    cout << n1 << "----" << endl;

    return 0;
}
