//map is a container everything with respect to key,value.key can be any data type.map stores unique things in sorted order
#include <iostream>
#include <map>

using namespace std; // Adding 'namespace std'

int main() {
    map<int, int> mpp;

    // Insert elements into the map
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert(make_pair(2, 4));
    mpp[{2, 3}] = 10;

    // Print the contents of the map
    for (const auto& it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Access elements by key
    cout << "Value at key 1: " << mpp[1] << endl;
    
    // Try to access an element that doesn't exist
    cout << "Value at key 5: " << mpp[5] << endl;

    // Find an element by key
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Found key 3: " << it->second << endl;
    } else {
        cout << "Key 3 not found." << endl;
    }

    // Find an element using lower_bound and upper_bound
    auto it_lower = mpp.lower_bound(2);
    auto it_upper = mpp.upper_bound(3);

    return 0;
}
