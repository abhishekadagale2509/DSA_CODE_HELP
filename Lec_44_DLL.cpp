#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;   // MOVE FORWARD
    }
    cout << endl;
}

int main()
{
    Node* temp = new Node(10);
    Node* head = temp;

    print(head);   // Output: 10

    return 0;
}
