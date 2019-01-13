#include <iostream>

using namespace std;

class FamilyMember {
private:
    string firstName;
    static string lastName;
public:
    FamilyMember(string name) {
        firstName = name;
    }
    void print() {
        cout << lastName << ", " << firstName << endl;
    }
};


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

   string FamilyMember::lastName = "Jones";


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    FamilyMember person1("Bob");
    FamilyMember person2("Sue");

    person1.print();
    person2.print();

    return 0;
}
