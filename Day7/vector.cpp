
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;

    // Add elements to the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // Access and print elements using iterator
    vector<int>::iterator it = v.begin();
     it++;
    cout << *(it) << " "<<endl;

    it = v.begin() + 2;
    cout << *(it) << " "<<endl;
    
    // Access and print elements using index and at
    cout << v[0] << " " <<endl<< v.at(0) << " "<<endl;
    cout << v.back() << " "<<endl;
    
    // Loop through the vector using iterators
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // Loop through the vector using a range-based for loop
    for (auto num : v) {
        cout << num << " ";
    }
    
    // Erase the element at index 1
    v.erase(v.begin() + 1);

    // Erase elements in the range [2, 4)
    v.erase(v.begin() + 2, v.begin() + 4);

    // Create a new vector and insert elements from v into it
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    // Print the size of the vector
    cout << v.size() << " ";

    // Remove the last element
    v.pop_back();

    // Swap two vectors
    vector<int> v2(2, 100);
    v.swap(v2);
    return 0;
}