#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;   // initialize next pointer
    }
};
void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* &head)
{
    Node *temp=head;
    cout<<temp->data;
    cout<<temp->next;
}

int main() {
    Node* node1 = new Node(10);

    cout << node1->data << endl;   // prints 10
    cout << node1->next << endl;   // prints 0 (NULL) or some address if changed

    //head is pointed to node1

    Node* head=node1;
    print(head);

    insertAtHead(head,12);
    return 0;
}

/*#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;   // initialize next pointer
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* head)
{
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {

    Node* node1 = new Node(10);

    Node* head = node1;

    print(head);  // prints: 10 -> NULL

    insertAtHead(head, 12);

    print(head);  // prints: 12 -> 10 -> NULL

    return 0;
}
*/