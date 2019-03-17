#include <iostream>
#define for NoFors
#define while NoWhiles
#define goto NoGotos

using namespace std;

template<typename T>
class Node {
public:
    //Value stored in this node
    T element;
    //Next node in list (nullptr == end of list)
    Node* next = nullptr;

    //Node must be constructed with a value - stored as element
    Node(T value) : element(value) {}
};


template <typename T>
T largest(Node<T>* current) {
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    T temp;
    if(current->next == nullptr){
        return current->element;
    }
    else{
        temp = largest(current->next);
        if(temp > current->element){
            return temp;
        }
        else{
            return current->element;
        }
    }

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}

int main()
{
    Node<char>* head = new Node<char>('B');
    char largestVal = largest(head);
    cout << largestVal << endl;

    head->next = new Node<char>('N');
    head->next->next = new Node<char>('A');
    largestVal = largest(head);
    cout << largestVal << endl;

    head->next->next->next = new Node<char>('R');
    largestVal = largest(head);
    cout << largestVal << endl;
}
