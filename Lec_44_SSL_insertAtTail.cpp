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

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;//tail=tail->next;
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
    Node* tail=node1;


    print(head);  // prints: 10 -> NULL

    insertAtHead(head, 12);
    print(head);  // prints: 12 -> 10 -> NULL

    insertAtTail(tail,15);
    print(head);


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
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;   // move tail forward
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
    Node* tail = node1;   // THIS IS IMPORTANT

    print(head);  // 10 -> NULL

    insertAtHead(head, 12);
    print(head);  // 12 -> 10 -> NULL

    insertAtTail(tail, 20);
    print(head);  // 12 -> 10 -> 20 -> NULL

    insertAtTail(tail, 30);
    print(head);  // 12 -> 10 -> 20 -> 30 -> NULL

    return 0;
}
*/