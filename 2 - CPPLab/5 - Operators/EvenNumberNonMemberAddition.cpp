#include <iostream>
using namespace std;


class EvenNumber {
public:
    explicit EvenNumber(int n) {
        value = (n % 2 == 0) ? n : n - 1; //must be even
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

EvenNumber operator+(const EvenNumber& n1, const EvenNumber& n2)
{
    int n = n1.getValue() + n2.getValue();
    return EvenNumber(n);
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    EvenNumber n1(6);
    EvenNumber n2(2);

    EvenNumber n3 = n1 + n2;
    cout << n3.getValue() << endl;

    return 0;
}
