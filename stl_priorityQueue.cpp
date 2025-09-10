#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>max;
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);
    int n=max.size();
    for(int i=0;i<n;i++)
    {
        cout<<max.top();
        max.pop();

    }

}
/*#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    // Max-heap (default)
    priority_queue<int> maxi;

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // Insert elements into max-heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);

    cout << "Max-Heap elements (descending order): ";
    int n = maxi.size();
    for (int i = 0; i < n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // Insert elements into min-heap
    mini.push(1);
    mini.push(3);
    mini.push(0);
    mini.push(2);

    cout << "Min-Heap elements (ascending order): ";
    int m = mini.size();
    for (int i = 0; i < m; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}
*/