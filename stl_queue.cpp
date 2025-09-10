#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push("a");
    q.push("b");
    q.push("c");
    cout<<q.front();
    q.pop();
    cout<<q.front();
    cout<<q.size();


}
/*#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("a");
    q.push("b");
    q.push("c");

    cout << "Front element: " << q.front() << endl; // "a"
    cout << "Back element: " << q.back() << endl;   // "c"

    q.pop(); // removes "a"

    cout << "Front after pop: " << q.front() << endl; // "b"
    cout << "Size of queue: " << q.size() << endl;    // 2
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
*/