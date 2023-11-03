#include <iostream>
#include <vector>
#include <utility> // Include the utility header for the pair template
using namespace std;
void explainvector() {
    // Create an empty vector of integers
    vector<int> v;
    // Add the integer 2 to the end of the vector using push_back
    v.push_back(2);
    // Using emplace_back to add the integer 2 to the end of the vector
    v.emplace_back(2);
    // Create an empty vector of pairs of integers
    vector<pair<int, int>> vec;
    // Add a pair (1, 2) to the end of the vector using push_back
    vec.push_back(make_pair(1, 2));
    // Using emplace_back to add a pair (1, 2) to the end of the vector
    vec.emplace_back(1, 2);
    // Create a vector of size 5 with all elements initialized to 100
    vector<int> v1(5, 100);
    // Create a vector of size 5 with all elements initialized to 20
    vector<int> v2(5, 20);
    // Create a copy of v1 and assign it to v2
    vector<int> v3(v1);
    // Print the contents of the vectors
    cout << "Vector v contains:";
    for (int num : v) {
        cout << " " << num;
    }
    cout << endl;

    cout << "Vector vec contains:";
    for (const pair<int, int>& p : vec) {
        cout << " (" << p.first << ", " << p.second << ")";
    }
    cout << endl;

    cout << "Vector v1 contains:";
    for (int num : v1) {
        cout << " " << num;
    }
    cout << endl;

    cout << "Vector v2 contains:";
    for (int num : v2) {
        cout << " " << num;
    }
    cout << endl;

    cout << "Vector v3 contains:";
    for (int num : v3) {
        cout << " " << num;
    }
    cout << endl;
}
int main() {
    explainvector(); // Call the function from main
    return 0;
}
