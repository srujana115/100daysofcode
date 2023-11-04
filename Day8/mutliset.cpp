//Everything is same as set only stores duplicate elements also.
#include <iostream>
#include <set>

using namespace std; // Adding 'namespace std'

int main() {
    multiset<int> ms;

    // Insert elements into the multiset
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout << "After inserting 1, 1, 1 into the multiset:";
    for (const int& element : ms) {
        cout << " " << element;
    }
    cout << endl;

    // Erase elements with a specific value (1)
    ms.erase(1);

    cout << "After erasing elements with value 1:";
    for (const int& element : ms) {
        cout << " " << element;
    }
    cout << endl;

    // Count the occurrences of a specific value (1)
    int cnt = ms.count(1);
    cout << "Number of occurrences of 1 in the multiset: " << cnt << endl;

    // Erase a specific element by value (1)
    auto it1 = ms.find(1);
    ms.erase(it1);

    cout << "After erasing one occurrence of 1 by value:";
    for (const int& element : ms) {
        cout << " " << element;
    }
    cout << endl;

    // Erase a range of elements (two occurrences of 1) using iterators
    auto it2 = ms.find(1);
    auto it3 = ms.find(1);
    ms.erase(it2, it3);

    cout << "After erasing a range (two occurrences of 1):";
    for (const int& element : ms) {
        cout << " " << element;
    }
    cout << endl;

    return 0;
}