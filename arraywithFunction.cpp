
#include<iostream>
using namespace std;

void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[5] = {1, 2, 3};
    printarray(a, 5); // pass correct size
}
