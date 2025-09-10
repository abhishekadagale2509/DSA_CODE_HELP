#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout<<i;

    }
    l.erase(l.begin());
    for(int i:l){
        cout<<i;
    }
    l.size();
}
/*#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    cout << "List elements: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // erase first element
    if (!l.empty()) {
        l.erase(l.begin());
    }

    cout << "After erase: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;

    return 0;
}
*/