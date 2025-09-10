#include<iostream>
#include<dque>
using namespace std;
int main()
{
    dque<int>d;
    d.push_back(1);
    d.push_back(2);
    for(i:d)
    {
        cout<<i;

    }
    d.pop_back();
    for(i:d)
    {
        cout<<i;
    }
    d.pop_front();
    for(i:d)
    {
        cout<<i;
    }
    d.erase(d.begin());
    d.size();
    d.empty();
}
/*#include <iostream>
#include <deque>   // correct header
using namespace std;

int main()
{
    deque<int> d;   // correct declaration

    d.push_back(1);
    d.push_back(2);

    cout << "After push_back(1), push_back(2): ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    cout << "After pop_back(): ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    cout << "After pop_front(): ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    if (!d.empty()) {
        d.erase(d.begin());
    }

    cout << "Size of deque: " << d.size() << endl;
    cout << "Is deque empty? " << (d.empty() ? "Yes" : "No") << endl;

    return 0;
}
*/