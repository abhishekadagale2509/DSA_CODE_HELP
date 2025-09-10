#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("a");
    s.push("b");
    s.push("c");
    cout<<s.top();
    s.pop();
    cout<<s.top();
    cout<<s.size();
    cout<<s.empty();

}
/*#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("a");
    s.push("b");
    s.push("c");

    cout << "Top element: " << s.top() << endl;  // should print "c"

    s.pop();  // removes "c"

    cout << "Top element after pop: " << s.top() << endl;  // should print "b"

    cout << "Size of stack: " << s.size() << endl;  

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
*/