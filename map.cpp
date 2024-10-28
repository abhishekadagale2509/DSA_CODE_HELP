#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map to store student names and scores
    std::map<std::string, int> studentScores;

    // Insert key-value pairs into the map
    studentScores["Alice"] = 90;
    studentScores["Bob"] = 85;
    studentScores["Charlie"] = 92;

    // Display the scores
    std::cout << "Student Scores:\n";
    for (const auto& entry : studentScores) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    // Find a specific student score
    std::string studentName = "Bob";
    auto it = studentScores.find(studentName);
    if (it != studentScores.end()) {
        std::cout << "\n" << studentName << "'s score: " << it->second << std::endl;
    } else {
        std::cout << "\n" << studentName << " not found in the map." << std::endl;
    }

    return 0;
}
