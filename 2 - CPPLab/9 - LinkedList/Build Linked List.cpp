#include <iostream>

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

using namespace std;

int main()
{
    Node<int>* head = nullptr;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    head = new Node<int>(20);
    head->next = new Node<int>(15);
    head->next->next = new Node<int>(35);
    head->next->next->next = nullptr;

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    Node<int>* current = head;
    while(current != nullptr) {
        cout << current->element << " ";  
        current = current->next;
    }
    cout << endl;
}
