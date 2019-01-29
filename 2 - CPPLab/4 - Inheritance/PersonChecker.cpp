#include <iostream>
using namespace std;


class Person {
public:
    virtual void foo() {}  //Force Person to be polymorphic
};


class Teacher : public Person {
};

class Student : public Person {
public:
    Student(int idNum) { id = idNum; }
    int getNum() { return id; }
private:
    int id;
};


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

  
void checkStudent(Person* p) {
   if(dynamic_cast<Student*>(p)) {
       Student *s = dynamic_cast<Student*>(p);
       cout << s->getNum() << endl;
   }
   else {
       cout << "Not student" << endl;
   }
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    Person* people[6] = {
        new Person(),
        new Student(1),
        new Teacher(),
        new Student(3),
        new Student(2),
        new Teacher()
    };

    for(int i = 0; i < 6; i++) {
        checkStudent(people[i]);
    }

}
