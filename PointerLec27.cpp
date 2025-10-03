#include<iostream>
using namespace std;

void update(int **ptr2) {
    **ptr2 = **ptr2 + 1; // increment i through double pointer
}

int main() {
    // --- Double pointer example ---
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "i = " << i << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "**ptr2 = " << **ptr2 << endl;

    update(ptr2); // increment i
    cout << "After update, i = " << i << endl;

    cout << "\n--- Single pointer example ---" << endl;
    int first = 0;
    int second = 18;

    ptr = &second; // reuse ptr, now points to second
    cout << "first = " << first << ", second = " << second << endl;
    cout << "*ptr = " << *ptr << endl;

    *ptr = 9; // change value of second through pointer
    cout << "second after change = " << second << ", first = " << first << endl;

    return 0;
}
