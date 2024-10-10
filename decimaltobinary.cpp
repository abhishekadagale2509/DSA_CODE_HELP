/*#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int num) {
    vector<int> binary;

    if (num == 0) {
        cout << "0";
        return;
    }

    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    // Print the binary number in reverse order
    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    cout << "Binary equivalent: ";
    decimalToBinary(number);

    return 0;
}
*/