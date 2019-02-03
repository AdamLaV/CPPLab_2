#include <iostream>
using namespace std;


class EvenNumber {
public:
    explicit EvenNumber(int n) {
        value = (n % 2 == 0) ? n : n - 1; //must be even
    }

    bool operator==(const EvenNumber& other) const;

    int getValue() const {
        return value;
    }
private:
    int value;
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

bool EvenNumber::operator == (const EvenNumber &other)const{
   if(getValue() == other.getValue()) {
       return true;
   }
   else {
       return false;
   }
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    EvenNumber n1(6);
    EvenNumber n2(6);
    EvenNumber n3(8);

    cout << std::boolalpha;  //print bools as true/false
    cout << (n1 == n2) << endl;
    cout << (n1 == n3) << endl;

    return 0;
}
