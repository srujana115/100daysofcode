//unordered set-same as set but the difference is it stores in unique way but not in sorted order
//lower_bound and upper_bound function does not work rest all functions are same as above it doesnt store in any way particular order it has a better complexity than set it most cases,except some when collision happens
#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset;

    // Insert elements into the unordered set
    uset.insert(1);
    uset.insert(2);
    uset.insert(3);
    uset.insert(2); // Duplicate elements are not added

    // Check if an element exists
    if (uset.find(2) != uset.end()) {
        std::cout << "2 exists in the unordered set." << std::endl;
    } else {
        std::cout << "2 does not exist in the unordered set." << std::endl;
    }

    // Erase elements from the unordered set
    uset.erase(3); // Remove the element with value 3

    // Print the contents of the unordered set
    std::cout << "Contents of the unordered set:";
    for (const int& element : uset) {
        std::cout << " " << element;
    }
    std::cout << std::endl;

    return 0;
}
