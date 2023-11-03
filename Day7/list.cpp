// list is similar to vector but gives front operations as well.List is dynamic in nature.
#include <iostream>
#include <list>
using namespace std;
void explainlist() {
    // Create an empty list of integers
    list<int> ls;

    // Add elements to the end of the list
    ls.push_back(1);       // Adds 1 to the end of the list
    ls.emplace_back(4);    // Adds 4 to the end of the list using emplace_back

    // Add elements to the front of the list
    ls.push_front(5);      // Adds 5 to the front of the list
    ls.emplace_front(3);   // Adds 3 to the front of the list
    ls.emplace_front(2);   // Adds 2 to the front of the list
}

int main() {
    explainlist(); // Call the function from main

    // Print the elements of the list
    list<int> ls;
    ls.push_back(1);
    ls.push_back(4);
    ls.push_front(5);
    ls.push_front(3);
    ls.push_front(2);

    cout << "Elements in the list: ";
    for (int num : ls) {
        cout << num << " ";
    }
// rest functons are same as vector
//begin,end,rbegin,rend,clear,insert,size,swap
    return 0;
}
