#include <iostream>
#include <vector>
#include <algorithm>  // For sort and for_each
using namespace std;
int main() {
    // Initialize a vector of integers
    vector<int> numbers = {5, 2, 8, 1, 3};

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Display sorted numbers using for_each
    cout << "Sorted numbers: ";
    for_each(numbers.begin(), numbers.end(), [](int n) {
    cout << n << " ";
    }
    );
    cout << endl;

    return 0;
}
