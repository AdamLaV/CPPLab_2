#include <iostream>


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
void printList(Node<T>* current);


template <typename T>
Node<T>* addAtTail(T value, Node<T>* oldTail) {

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    Node<T>* n = new Node<T>(value);
    oldTail->next = n;
    return n;

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}

int main()
{
    Node<int>* head = new Node<int>(10);
    Node<int>* tail = head;

    tail = addAtTail(20, tail);
    printList(head);
    tail = addAtTail(30, tail);
    printList(head);

}

template <typename T>
void printList(Node<T>* current) {
    while(current != nullptr) {
        cout << current->element << " ";
        current = current->next;
    }
    cout << endl;
}
