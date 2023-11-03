#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> dq;

    // Add elements to the back and front of the deque
    dq.push_back(1);         // Add 1 to the back
    dq.emplace_back(2);      // Add 2 to the back using emplace_back
    dq.push_front(4);        // Add 4 to the front
    dq.emplace_front(3);     // Add 3 to the front using emplace_front

    // Remove elements from the back and front of the deque
    dq.pop_back();           // Remove the last element from the back
    dq.pop_front();          // Remove the first element from the front

    // Access and print the elements at the back and front
    int backElement = dq.back();     // Get the last element
    int frontElement = dq.front();   // Get the first element

    // Print the elements
    cout << "Back Element: " << backElement << endl;
    cout << "Front Element: " << frontElement << endl;

    return 0;
}

// rest functons are same as vector
//begin,end,rbegin,rend,clear,insert,size,swap