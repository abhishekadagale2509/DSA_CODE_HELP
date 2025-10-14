#include <iostream>
using namespace std;

void recursivecall(int src, int dest) {
    cout << src << " " << dest << endl;

    // Base case: stop when source equals destination
    if (src == dest) {
        cout << "Reached destination!" << endl;
        return;  // stop recursion
    }
    src++;
    // Recursive case: move towards destination
    recursivecall(src, dest);//recursivecall(src+1, dest);
}

int main() {
    int src = 1;
    int dest = 10;
    recursivecall(src, dest);
    return 0;
}
