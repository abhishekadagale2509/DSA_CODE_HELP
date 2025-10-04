#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // allocate 2D array
    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    // input elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // output elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
