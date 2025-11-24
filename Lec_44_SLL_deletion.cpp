#include<iostream>
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

    ~Node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next!=NULL;
        }
        cout<<"memory is free for node with data";


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

void insertAtPosition(Node* &head,Node* &tail,int position,int d)
{   //if ele put on first position
    Node* temp=head;
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    //if ele put on last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;

    }
    int cnt=1;
    while(cnt<position)
    {
        temp=temp->next;
        cnt++;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;


}

void deleteNode(int position,Node* & head)
{
    //deleting first and last node
    if(position==1){
        Node* temp=new Node;
        head=head->next;
        temp->next=NULL;
        delete temp;


    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* pre=NULL;
        int cnt=1;
        while(cnt<position)
        {
            pre=curr;
            curr=curr->next;
            cnt++;


        }
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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

    deleteNode(10,head);
    print(head);

    return 0;
}
/*#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Deleting node with data: " << data << endl;
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
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1 && temp->next != NULL){
        temp = temp->next;
        cnt++;
    }

    // inserting at last
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head)
{
    // deleting head
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while(cnt < position && curr != NULL){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if(curr == NULL){
        cout << "Position out of range!" << endl;
        return;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
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
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtTail(tail, 30);
    print(head);

    deleteNode(2, head);  // delete position 2
    print(head);

    return 0;
}
*/