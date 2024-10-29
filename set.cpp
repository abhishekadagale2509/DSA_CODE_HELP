#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> mySet;

    // Insert elements into the set
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(1);

    // Try to insert a duplicate element
    mySet.insert(5);  // This won't be added because 5 is already in the set

    // Display the elements in the set
    std::cout << "Elements in the set: ";
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if an element is in the set
    int searchValue = 3;
    if (mySet.find(searchValue) != mySet.end()) {
        std::cout << searchValue << " is in the set." << std::endl;
    } else {
        std::cout << searchValue << " is not in the set." << std::endl;
    }

    // Remove an element from the set
    mySet.erase(2);

    // Display elements after deletion
    std::cout << "Elements after removing 2: ";
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
