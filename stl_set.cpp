#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(i:s)
    {
        cout<<i;
    }
    s.erase(s.begin());
    cout<<s.count(5);
}
/*#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5); // duplicate ignored
    s.insert(1);
    s.insert(1); // duplicate ignored
    s.insert(2);
    s.insert(3);

    cout << "Set elements: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    // erase first element (smallest, since set is sorted)
    s.erase(s.begin());

    cout << "After erase: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Count of 5 in set: " << s.count(5) << endl;

    return 0;
}
*/