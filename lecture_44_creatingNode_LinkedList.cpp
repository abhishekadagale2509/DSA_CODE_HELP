#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;


//constructor
Node(int data)
{
this->data=data;
this->next=next;
}
};
int main()
{

    Node* node1=new Node(10);
    cout<<node1->data;
    cout<<node1->next;
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
        this->next = nullptr;   // initialize next pointer
    }
};

int main() {
    Node* node1 = new Node(10);

    cout << node1->data << endl;   // prints 10
    cout << node1->next << endl;   // prints 0 (NULL) or some address if changed

    return 0;
}
*/