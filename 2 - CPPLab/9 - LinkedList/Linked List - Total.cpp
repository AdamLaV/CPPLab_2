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


int total(Node<int>* current) {
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    if(current == nullptr){
        return 0;
    }
    else{
        return current->element + total(current->next);
    }
	

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}

int main()
{
    Node<int>* head = new Node<int>(5);
    int totalVal = total(head);
    cout << totalVal << endl;

    head->next = new Node<int>(3);
    totalVal = total(head);
    cout << totalVal << endl;

    head->next->next = new Node<int>(6);
    totalVal = total(head);
    cout << totalVal << endl;
}
