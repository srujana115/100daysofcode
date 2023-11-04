//set stores everything in sorted and unique
#include <iostream>
#include <set>

using namespace std; // Adding 'namespace std'

int main() {
    set<int> st;

    // Insert elements into the set
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    // Finding an element in the set
    auto it = st.find(3);
    if (it != st.end()) {
        cout << "Found: " << *it << endl; 
    } else {
        cout << "Not Found" << endl; 
    }

    it = st.find(6);
    if (it == st.end()) {
        cout << "Not Found" << endl;
    }

    // Erasing elements from the set
    st.erase(5); 

    int cnt = st.count(1); 

    it = st.find(3);
    if (it != st.end()) {
        st.erase(it); 
    }

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); 
    // Lower_bound and upper_bound functions
    auto lb_it = st.lower_bound(2); 
    auto ub_it = st.upper_bound(3); 
    // Display the set after all operations
    for (const int& element : st) {
        cout << element << " "; 
    }
    cout << endl; 
    return 0;
}
