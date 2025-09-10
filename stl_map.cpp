#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="a";
    m[2]="b";
    m[3]="c";

    for(auto i:m)
    {
        cout<<i.first<<i.second;

    }
    m.insert({4,"d"});
}
/*#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    // insert using operator[]
    m[1] = "a";
    m[2] = "b";
    m[3] = "c";

    cout << "Initial map: ";
    for (auto &i : m) {
        cout << "{" << i.first << ", " << i.second << "} ";
    }
    cout << endl;

    // insert using insert()
    m.insert({4, "d"});

    cout << "After insert: ";
    for (auto &i : m) {
        cout << "{" << i.first << ", " << i.second << "} ";
    }
    cout << endl;

    return 0;
}
*/